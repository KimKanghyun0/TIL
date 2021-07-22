#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
/*
 * 몇개의 프로세스가 생성되나
 */
int main()
{
    fork();
    fork();
    fork();

    return 0;
}

/*
1.  부모를 P0이라고 하면
    P0에서 첫 fork시 P1 생성

2.  P0에서 두번째 fork시 P2 생성
    (P1에서 첫번쨰 fork시 첫번째 fork로 만들어진 자식 프로세스라서 0을 리턴하며 자식 생성 안됨)
    P1에서 두번째 fork시 P3 생성

3.  P0에서 세번째 fork시 P4 생성
    P1에서 세번째 fork시 P5 생성
    P2에서 세번째 fork시 P6 생성
    P3에서 세번째 fork시 P7 생성

  총 8개 프로세스 생성됨
*/
