#include <stdio.h>
#include <sys/prctl.h>
#include <signal.h>
#include <sys/time.h>
#include <time.h>

#include <system_server.h>
#include <gui.h>
#include <input.h>
#include <web_server.h>

static int toy_timer = 0;

int posix_sleep_ms(unsigned int timeout_ms)
{
    struct timespec sleep_time;

    sleep_time.tv_sec = timeout_ms / MILLISEC_PER_SECOND;
    sleep_time.tv_nsec = (timeout_ms % MILLISEC_PER_SECOND) * (NANOSEC_PER_USEC * USEC_PER_MILLISEC);

    return nanosleep(&sleep_time, NULL);
}

void sigalarm_handler(int sig) {
    printf("time hanlder : %d\n", toy_timer++);
}

int system_server()
{
    struct itimerval ts;
    struct sigaction  sa;
    struct sigevent   sev;

    printf("나 system_server 프로세스!\n");

    /* 5초 타이머를 만들어 봅시다. */
    
    sa.sa_flags = 0;
    sigemptyset(&sa.sa_mask);
    sa.sa_handler = sigalarm_handler;
    if (sigaction(SIGALRM, &sa, NULL) == -1) {
        perror("SIGALRM sigaction error");
    }

    ts.it_interval.tv_sec = 5;
    ts.it_interval.tv_usec = 0;
    ts.it_value.tv_sec = 5;
    ts.it_value.tv_usec = 0;

    if (setitimer(ITIMER_REAL, &ts, NULL)) {
        perror("setTimer error");
    }

    while (1) {
        posix_sleep_ms(5000);
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
