#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <mqueue.h>
#include <assert.h>

#include <system_server.h>
#include <gui.h>
#include <input.h>
#include <web_server.h>
#include <toy_message.h>

#define NUM_MESSAGES 10

static mqd_t watchdog_queue;
static mqd_t monitor_queue;
static mqd_t disk_queue;
static mqd_t camera_queue;

/* 여기서 sigchld 핸들러 구현 */
static void
sigchldHandler(int sig)
{
    /* 구현 */
    int status;
    pid_t childPid;

    printf("handler: Caught SigCHLD : %d\n", sig);
    
    while ((childPid = waitpid(-1, &status, WNOHANG)) > 0) {
        printf("handler: Reaped child %ld - ", (long) childPid);
    }
    
    printf("handler : returning\n");
}

int main()
{
    pid_t spid, gpid, ipid, wpid;
    int status, savedErrno;
    int sigCnt;
    sigset_t blockMask, emptyMask;
    struct sigaction sa;
    struct mq_attr attr;
    int retcode;

    /* 여기서 SIGCHLD 시그널  등록 */
    sa.sa_flags = 0;
    sigemptyset(&sa.sa_mask);
    sa.sa_handler = sigchldHandler;
    if (sigaction(SIGCHLD, &sa, NULL) == -1) {
        perror("SIGCHLD sigaction error");
    }

    printf("메인 함수입니다.\n");

    // 여기에 구현하세요.
    /* 메시지 큐를 생성한다. */
    attr.mq_maxmsg = NUM_MESSAGES;
    attr.mq_msgsize = sizeof(toy_msg_t);

    watchdog_queue = mq_open(&watchdog_queue,"/watchdog_queue", O_RDWR|O_CREAT, 0666, &attr);
    if (watchdog_queue == (mqd_t) -1)
        perror("main - watchdog_queue : mq_open");
    monitor_queue = mq_open(&monitor_queue,"/monitor_queue", O_RDWR|O_CREAT, 0666, &attr);
    if (monitor_queue == (mqd_t) -1)
        perror("main - monitor_queue : mq_open");
    disk_queue = mq_open(&disk_queue,"/disk_queue", O_RDWR|O_CREAT, 0666, &attr);
    if (disk_queue == (mqd_t) -1)
        perror("main - disk_queue : mq_open");
    camera_queue = mq_open(&camera_queue,"/camera_queue", O_RDWR|O_CREAT, 0666, &attr);
    if (camera_queue == (mqd_t) -1)
        perror("main - camera_queue : mq_open");

    printf("시스템 서버를 생성합니다.\n");
    spid = create_system_server();
    printf("웹 서버를 생성합니다.\n");
    wpid = create_web_server();
    printf("입력 프로세스를 생성합니다.\n");
    ipid = create_input();
    printf("GUI를 생성합니다.\n");
    gpid = create_gui();

    waitpid(spid, &status, 0);
    waitpid(gpid, &status, 0);
    waitpid(ipid, &status, 0);
    waitpid(wpid, &status, 0);

    return 0;
}
