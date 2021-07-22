#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
    pid = fork();

    if (pid == 0) { //자식
        printf("child: pid = %d\n", pid); // pid 0 이면 자식프로세스임
        printf("child: pid1 = %d\n", getpid()); // 자식의 PID
    } else if (pid > 0) { //부모
        printf("parent: pid = %d\n", pid); // 자식의 PID
        printf("parent: pid1 = %d\n", getpid()); // 부모의 PID
    }

    return 0;
}
