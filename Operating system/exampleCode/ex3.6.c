#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
    int i;

    for (i = 0; i < 4; i++){
        pid = fork();
        printf("pid: %d \n", pid);
    }

    return 0;
}
