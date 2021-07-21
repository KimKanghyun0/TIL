#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*  
    # instruction

    C 컴파일
    $ gcc ex3.3_Zombie.c 

    컴파일 결과 실행 + & 붙이면 백그라운드에서 프로세스 시작, 쉘 계속 사용 가능
    $ ./a.out &

    프로세스 목록과 상태 보기
    $ ps aux | grep 'Z'
*/
int main() {
     
    pid_t childPid;
     
    childPid = fork();
     
    if(childPid > 0) {  // 부모 프로세스
        printf("부모 PID : %ld, pid : %d\n",(long)getpid(), childPid);
        sleep(30);
        printf("부모 종료\n");
        exit(0);
    }
    else if(childPid == 0){  // 자식 코드
        printf("자식 시작 PID : %ld\n", (long)getpid());
        sleep(1);
        printf("자식 종료\n");
        exit(0);
    }
    else {  // fork 실패
        perror("fork Fail! \n");
        return -1;
    }
     
    return 0;
}