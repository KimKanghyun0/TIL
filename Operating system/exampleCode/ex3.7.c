#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
    pid = fork();

    if(pid==0){ //자식
        execlp("/bin/ls", "ls", NULL); //다른프로그램을 실행하고 종료하는 함수라서 (생성된 자식 프로세스를 ls프로세스로 바꾸기 때문)
        printf("LINE J\n"); //이 라인을 출력안됨
    }else if(pid>0){ //부모
        wait(NULL);
        printf("Child Complete\n");
    }

    return 0;
}
