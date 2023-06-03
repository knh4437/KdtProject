#include <assert.h>
#include <pthread.h>
#include <stdio.h>
#include <semaphore.h>
#include <sys/prctl.h>
#include <signal.h>
#include <sys/time.h>
#include <time.h>
#include <mqueue.h>
#include <sys/inotify.h>
#include <limits.h>
#include <sys/stat.h>
#include <time.h>
#include <sys/sysmacros.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>
#include <string.h>
#include <dirent.h>

#include <system_server.h>
#include <gui.h>
#include <input.h>
#include <web_server.h>
// #include <camera_HAL.h>
#include <toy_message.h>
#include <shared_memory.h>
#include <dump_state.h>
#include <hardware.h>

#define PTHREAD_COUNT 5
#define CAMERA_TAKE_PICTURE 1

#define BUF_LEN 1024
#define TOY_TEST_FS "./fs"

pthread_mutex_t system_loop_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t  system_loop_cond  = PTHREAD_COND_INITIALIZER;
bool            system_loop_exit = false;    ///< true if main loop should exit

static mqd_t watchdog_queue;
static mqd_t monitor_queue;
static mqd_t disk_queue;
static mqd_t camera_queue;

static int toy_timer = 0;
pthread_mutex_t toy_timer_mutex = PTHREAD_MUTEX_INITIALIZER;
static sem_t global_timer_sem;
static bool global_timer_stopped;

static shm_sensor_t *the_sensor_info = NULL;
void set_periodic_timer(long sec_delay, long usec_delay);
void getdumpstate();

static void timer_expire_signal_handler()
{
    // signal 문맥에서는 비동기 시그널 안전 함수(async-signal-safe function) 사용
    // man signal 확인
    // sem_post는 async-signal-safe function
    // 여기서는 sem_post 사용
    sem_post(&global_timer_sem);
}

static void system_timeout_handler()
{
    // 여기는 signal hander가 아니기 때문에 안전하게 mutex lock 사용 가능
    pthread_mutex_lock(&toy_timer_mutex);
    toy_timer++;
    pthread_mutex_unlock(&toy_timer_mutex);
}

static void *timer_thread(void *not_used)
{
    signal(SIGALRM, timer_expire_signal_handler);
    set_periodic_timer(1, 1);

	while (!global_timer_stopped) {
		int rc = sem_wait(&global_timer_sem);
		if (rc == -1 && errno == EINTR) {
		    continue;
		}

		if (rc == -1) {
		    perror("sem_wait");
		    exit(-1);
		}
        // 아래 sleep을 sem_wait 함수를 사용하여 동기화 처리
        // sleep(1);
		system_timeout_handler();
	}
	return 0;
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
        if (mq_receive(watchdog_queue, (void *)&msg, sizeof(toy_msg_t), 0)== -1)
            perror("watchdog_queue : mq_receive");
    }


    return 0;
}

#define SENSOR_DATA 1
#define DUMP_STATE 2
#define DUMP_FILE_SIZE 14

char *files[DUMP_FILE_SIZE] = {
    "/proc/version",
    "/proc/meminfo",
    "/proc/vmstat",
    "/proc/vmallocinfo",
    "/proc/slabinfo",
    "/proc/zoneinfo",
    "/proc/pagetypeinfo",
    "/proc/buddyinfo",
    "dmesg",
    "show_wchan",
    "/proc/net/dev",
    "/proc/net/route",
    "/proc/net/ipv6_route",
    "/proc/interrupts"
};

void getdumpstate() {
    int fd, s;
    int size = 1024;
    char buf[size];
    
    for (int i=0;i<DUMP_FILE_SIZE;i++) {
        fd = open(files[i], O_RDONLY);
        if (fd == -1)
            perror("dump : open");

        while (1) {
            s = read(fd, buf, size);
            if (s < 0) {
                perror("read error");
                exit(-1);
            }
            else if (s == 0)
                break;
            write(STDOUT_FILENO, buf, s);
        }
        if (close(fd)==-1)
            perror("dump : close");
        printf("\n");
    }
}

void *monitor_thread(void* arg) {
    char *s = arg;
    int mqretcode;
    toy_msg_t msg;
    int shmid;

    printf("%s", s);

    while (1) {
        mqretcode = (int)mq_receive(monitor_queue, (void *)&msg, sizeof(toy_msg_t), 0);
        assert(mqretcode >= 0);
        printf("monitor_thread: 메시지가 도착했습니다.\n");
        printf("msg.type: %d\n", msg.msg_type);
        printf("msg.param1: %d\n", msg.param1);
        printf("msg.param2: %d\n", msg.param2);
        if (msg.msg_type == SENSOR_DATA) {
            shmid = msg.param1;
            // 이곳에 구현해 주세요.
            // 시스템 V 공유 메모리 사용하여 공유 메모리 데이터를 출력
            // 공유 메모리 키는 메시지 큐에서 받은 값을 사용.
            the_sensor_info = toy_shm_attach(shmid);
            printf("temp : %d\n", the_sensor_info->temp);
            printf("pressure : %d\n", the_sensor_info->press);
            printf("humidity: %d\n", the_sensor_info->humidity);
            toy_shm_detach(the_sensor_info);
        } else if (msg.msg_type == DUMP_STATE) {
            // 여기에 dumpstate를 구현해 주세요.
            getdumpstate();
            
        } else {
            printf("monitor_thread: unknown message. xxx\n");
        }
    }

    return 0;
}

// https://stackoverflow.com/questions/21618260/how-to-get-total-size-of-subdirectories-in-c
void *disk_service_thread(void* arg)
{
    char *s = arg;
    int inotifyFd, wd, j;
    char buf[BUF_LEN] __attribute__ ((aligned(8)));
    ssize_t numRead;
    char *p;
    struct inotify_event *event;
    char *directory = TOY_TEST_FS;
    int total_size;

    printf("%s", s);

    // 여기에 구현
    inotifyFd = inotify_init();
    if (inotifyFd == -1)
        perror("inotify_init");

    wd = inotify_add_watch(inotifyFd, directory, IN_CREATE);
    if (wd == -1)
        perror("inotify_add_watch");
    while (1) {
        numRead = read(inotifyFd, buf, BUF_LEN);
        if (numRead <= 0)
            perror("read");
        
        p = buf;
        while (p < buf + numRead) {
            event = (struct inotify_event *)p;
            if (event->mask & IN_CREATE) {
                if (event->len >0){
                    if (strcmp(event->name, "fs") == 0) {
                        printf("Directory size : ");
                        system("du -sh .");
                    }
                }
            }
            p += sizeof(struct inotify_event) + event->len;
        }
        sleep(1);
    }
    inotify_rm_watch(inotifyFd, wd);
    close(inotifyFd);

    return 0;
}
void *camera_service_thread(void* arg) {
    char *s = arg;
    int mqretcode;
    toy_msg_t msg;
    hw_module_t *module = NULL;
    int res;

    printf("%s", s);
    // 여기서 동적으로 심볼을 로딩 합니다.
    res = hw_get_camera_module((const hw_module_t **)&module);
    assert(res == 0);
    printf("Camera module name: %s\n", module->name);
    printf("Camera module tag: %d\n", module->tag);
    printf("Camera module id: %s\n", module->id);
    module->open();

    /* 여기에 구현하세요. */
    while (1) {
        if ((mqretcode = (int)mq_receive(camera_queue, (void *)&msg, sizeof(toy_msg_t), 0)) == -1)
            perror("camera_queue : mq_receive");
        printf("camera_service_thread: 메시지가 도착했습니다.\n");
        printf("msg.type: %d\n", msg.msg_type);
        printf("msg.param1: %d\n", msg.param1);
        printf("msg.param2: %d\n", msg.param2);
        if (msg.msg_type==CAMERA_TAKE_PICTURE) {
            module->take_picture();
        } else if (msg.msg_type == DUMP_STATE) {
            module->dump();
        } else {
            printf("camera_service_thread: unknown message. xxx\n");
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
    int retcode[PTHREAD_COUNT];
    pthread_t watchdog_thread_tid, monitor_thread_tid, disk_service_thread_tid, camera_service_thread_tid;
    pthread_t timer_thread_tid;

    printf("나 system_server 프로세스!\n");

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
    retcode[4] = pthread_create(&timer_thread_tid, NULL, timer_thread, "timer thread");


    int length = sizeof(retcode) / sizeof(retcode[0]);

    for (int i=0;i<length;i++) {
        if (retcode[i] != 0)
            perror(retcode[i] + " : pthread_create error\n");
    }

    printf("system init done.  waiting...");

    // 여기에 구현하세요... 여기서 cond wait로 대기한다. 10초 후 알람이 울리면 <== system 출력
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
