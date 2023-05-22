#include <stdio.h>
#include <sys/wait.h>
#include <system_server.h>
#include <gui.h>
#include <input.h>
#include <web_server.h>

int create_gui()
{
    pid_t systemPid;
    int child, status;

    printf("여기서 GUI 프로세스를 생성합니다.\n");

    sleep(3);
    /* fork + exec 를 이용하세요 */
    /* exec으로 google-chrome-stable을 실행 하세요. */
    /* (execl("/usr/bin/google-chrome-stable", "google-chrome-stable", "http://localhost:8282", NULL)) */
    int pid = fork();
    if (pid==0) {
        printf("child id=%d\n",getpid());
        execl("/usr/bin/google-chrome-stable", "google-chrome-stable", "http://localhost:8282", NULL);
        exit(1);
    } else {
        child = wait(&status);
        printf("[%d] 자식 프로세스 %d 종료 \n", getpid(), child);
    }

    return 0;
}
