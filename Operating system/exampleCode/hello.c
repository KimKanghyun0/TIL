#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int value = 5;

int main()
{
    pid_t pid; //program ID
    
    pid = fork(); //child process create
    /* fork() fail > return -1
     * fork() sucess > 1. parent process return child process pid
     *                 2. child process return 0 
     */

    if(pid == 0) {
        value += 15;
        return 0;
    } else if (pid > 0){
        wait(NULL);
        printf("Parent: value = %d\n", value);
    }
}