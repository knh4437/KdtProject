#include <assert.h>
#include <pthread.h>
#include <stdio.h>
#include <sys/prctl.h>
#include <signal.h>
#include <sys/time.h>
#include <time.h>
#include <mqueue.h>

#include <system_server.h>
#include <gui.h>
#include <input.h>
#include <web_server.h>
#include <camera_HAL.h>
#include <toy_message.h>
#define CAMERA_TAKE_PICTURE 1

pthread_mutex_t system_loop_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t  system_loop_cond  = PTHREAD_COND_INITIALIZER;
bool            system_loop_exit = false;    ///< true if main loop should exit

static mqd_t watchdog_queue;
static mqd_t monitor_queue;
static mqd_t disk_queue;
static mqd_t camera_queue;

static int toy_timer = 0;

void signal_exit(void);

void sigalarm_handler(int sig) {
    toy_timer++;
    signal_exit();
}

void set_periodic_timer(long sec_delay, long usec_delay)
{
	struct itimerval itimer_val = {
		 .it_interval = { .tv_sec = sec_delay, .tv_usec = usec_delay },
		 .it_value = { .tv_sec = sec_delay, .tv_usec = usec_delay }
    };

	setitimer(ITIMER_REAL, &itimer_val, (struct itimerval*)0);
}

int posix_sleep_ms(unsigned int timeout_ms)
{
    struct timespec sleep_time;

    sleep_time.tv_sec = timeout_ms / MILLISEC_PER_SECOND;
    sleep_time.tv_nsec = (timeout_ms % MILLISEC_PER_SECOND) * (NANOSEC_PER_USEC * USEC_PER_MILLISEC);

    return nanosleep(&sleep_time, NULL);
}

void *watchdog_thread(void* arg) {
    char *s = arg;
    int mqretcode;
    toy_msg_t msg;

    printf("%s", s);
  
    /* 여기에 구현하세요. */
    while (1) {
        if (mq_receive(watchdog_queue, (char)&msg, sizeof(toy_msg_t), 0)== -1)
            perror("watchdog_queue : mq_receive");
    }


    return 0;
}

void *monitor_thread(void* arg) {
    char *s = arg;
    int mqretcode;
    toy_msg_t msg;

    printf("%s", s);

    /* 여기에 구현하세요. */
    while (1) {
        if (mq_receive(monitor_queue, (char)&msg, sizeof(toy_msg_t), 0) == -1)
            perror("monitor_queue : mq_receive");
    }

    return 0;
}

void *disk_service_thread(void* arg) {
    char *s = arg;
    FILE* apipe;
    char buf[1024];
    char cmd[]="df -h ./" ;
    int mqretcode;
    toy_msg_t msg;

    printf("%s", s);

    while (1) {
        /* popen 사용하여 10초마다 disk 잔여량 출력
         * popen으로 shell을 실행하면 성능과 보안 문제가 있음
         * 향후 파일 관련 시스템 콜 시간에 개선,
         * 하지만 가끔 빠르게 테스트 프로그램 또는 프로토 타입 시스템 작성 시 유용
         */
        // apipe = popen(cmd, "r");
        // if (apipe == NULL) {
        //     printf("popen() failed\n");
        //     continue;
        // }
        // while (fgets(buf, sizeof(buf), apipe)!=NULL) {
        //     printf("%s", buf);
        // }
        // pclose(apipe);
        // posix_sleep_ms(10000);

        if (mq_receive(disk_queue, (char)&msg, sizeof(toy_msg_t), 0) == -1)
            perror("disk_queue : mq_receive");
    }

    return 0;
}

void *camera_service_thread(void* arg) {
    char *s = arg;
    int mqretcode;
    toy_msg_t msg;

    printf("%s", s);

    toy_camera_open();

    /* 여기에 구현하세요. */
    while (1) {
        if ((mqretcode = (int)mq_receive(camera_queue, (void *)&msg, sizeof(toy_msg_t), 0)) == -1)
            perror("camera_queue : mq_receive");
        printf("camera_service_thread: 메시지가 도착했습니다.\n");
        printf("msg.type: %d\n", msg.msg_type);
        printf("msg.param1: %d\n", msg.param1);
        printf("msg.param2: %d\n", msg.param2);
        if (msg.msg_type==CAMERA_TAKE_PICTURE) {
            toy_camera_take_picture();
        }
    }

    return 0;
}


void signal_exit(void)
{
    /* 여기에 구현하세요..  종료 메시지를 보내도록.. */
    pthread_mutex_lock(&system_loop_mutex);
    system_loop_exit = true;
    pthread_cond_broadcast(&system_loop_cond);
    pthread_mutex_unlock(&system_loop_mutex);
}

int system_server()
{
    struct itimerval ts;
    struct sigaction  sa;
    struct sigevent   sev;
    timer_t *tidlist;
    int retcode[4];
    pthread_t watchdog_thread_tid, monitor_thread_tid, disk_service_thread_tid, camera_service_thread_tid;

    printf("나 system_server 프로세스!\n");

    signal(SIGALRM, sigalarm_handler);
    /* 10초 타이머 등록 */
    set_periodic_timer(10, 0);

    /* 여기에 구현하세요. */
    /* 메시지 큐를 오픈한다. */
    watchdog_queue = mq_open("/watchdog_queue", O_RDWR);
    if (watchdog_queue == (mqd_t) -1)
        perror("system_server - watchdog_queue : mq_open");
    monitor_queue = mq_open("/monitor_queue", O_RDWR);
    if (monitor_queue == (mqd_t) -1)
        perror("system_server - monitor_queue : mq_open");
    disk_queue = mq_open("/disk_queue", O_RDWR);
    if (disk_queue == (mqd_t) -1)
        perror("system_server - disk_queue : mq_open");
    camera_queue = mq_open("/camera_queue", O_RDWR);
    if (camera_queue == (mqd_t) -1)
        perror("system_server - camera_queue : mq_open");

    /* watchdog, monitor, disk_service, camera_service 스레드를 생성한다. */
    retcode[0] = pthread_create(&watchdog_thread_tid, NULL, watchdog_thread, "watchdog thread");
    retcode[1] = pthread_create(&monitor_thread_tid, NULL, monitor_thread, "monitor thread");
    retcode[2] = pthread_create(&disk_service_thread_tid, NULL, disk_service_thread, "disk_service thread");
    retcode[3] = pthread_create(&camera_service_thread_tid, NULL, camera_service_thread, "camera_service thread");

    int length = sizeof(retcode) / sizeof(retcode[0]);

    for (int i=0;i<length;i++) {
        if (retcode[i] != 0)
            perror(retcode[i] + " : pthread_create error\n");
    }

    printf("system init done.  waiting...");

    // 여기에 구현하세요... 여기서 cond wait로 대기한다. 10초 후 알람이 울리면 <== system 출력
    // /* 1초 마다 wake-up 한다 */
    // while (system_loop_exit == false) {
    //     sleep(1);
    // }
    pthread_mutex_lock(&system_loop_mutex);
    while (system_loop_exit == false) {
        pthread_cond_wait(&system_loop_cond, &system_loop_mutex);
    }
    pthread_mutex_unlock(&system_loop_mutex);
    
    printf("<== system\n");
    while (1) {
        sleep(1);
    }

    return 0;
}

int create_system_server()
{
    pid_t systemPid;
    const char *name = "system_server";

    printf("여기서 시스템 프로세스를 생성합니다.\n");

    /* fork 를 이용하세요 */
    switch (systemPid = fork()) {
    case -1:
        printf("fork failed\n");
    case 0:
        /* 프로세스 이름 변경 */
        if (prctl(PR_SET_NAME, (unsigned long) name) < 0)
            perror("prctl()");
        system_server();
        break;
    default:
        break;
    }

    return 0;
}
