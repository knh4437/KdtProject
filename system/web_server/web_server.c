#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/utsname.h>
#include <sched.h>
#include <signal.h>

#include <system_server.h>
#include <gui.h>
#include <input.h>
#include <web_server.h>

static int child_func(void *arg) {

    printf("[ Parent PID : %d ] Clone Succeed - child PID : %d\n", getppid(), getpid());

    if (execl("/usr/local/bin/filebrowser", "filebrowser", "-p", "8282", (char *) NULL)) {
        printf("execfailed\n");
        return -1;
    }
    return 0;
}

#define STACK_SIZE (1024 * 1024) 

int create_web_server()
{
    pid_t child_pid;

    printf("여기서 Web Server 프로세스를 생성합니다.\n");

    
    // fork를 clone + 새로운 namespace로 생성하세요.
    char *stack = mmap(NULL, STACK_SIZE, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_STACK, -1, 0);
    if (stack == MAP_FAILED)
        perror("mmap");

    child_pid = clone(child_func, stack + STACK_SIZE, CLONE_NEWUTS | CLONE_NEWIPC | CLONE_NEWPID | CLONE_NEWNS | SIGCHLD, NULL);
    if (child_pid == -1)
        perror("clone");
    

    // switch (systemPid = fork()) {
    // case -1:
    //     printf("fork failed\n");
    // case 0:
    //     if (execl("/usr/local/bin/filebrowser", "filebrowser", "-p", "8282", (char *) NULL)) {
    //         printf("execfailed\n");
    //     }
    //     break;
    // default:
    //     break;
    // }

    return 0;
}
