#include <stdio.h>
#include <sys/wait.h>
#include <system_server.h>
#include <gui.h>
#include <input.h>
#include <web_server.h>

int create_web_server()
{
    pid_t systemPid;
    int child, status;

    printf("여기서 Web Server 프로세스를 생성합니다.\n");

    /* fork + exec 를 이용하세요 */
    /* exec으로 filebrowser을 실행 하세요. */
    /* execl("/usr/local/bin/filebrowser", "filebrowser", "-p", "8282", (char *) NULL)) */
    int pid =fork();
    if (pid== 0) {
        printf("child id=%d\n", getpid());
        execl("/usr/local/bin/filebrowser", "filebrowser", "-p", "8282", (char *) NULL);
        exit(1);
    } else {
        printf("[%d] child process =%d\n", getpid(), child);
    }

    return 0;
}
