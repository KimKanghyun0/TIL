#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

#define SIZE 5
int nums[SIZE] = {0, 1, 2, 3, 4};

int main()
{
    pid_t pid;
    int i;
    pid = fork();

    if (pid == 0) { //자식
        for (i = 0; i < SIZE; i++) {
            nums[i] *= i;
            printf("child: %d\n", nums[i]);
        }
    } else if (pid > 0) { //부모
        wait(NULL); // 자식프로세스가 끝나길 기다림
        for (i = 0; i < SIZE; i++) {
            printf("parent: %d \n", nums[i]);
        }
    }

    return 0;
}
