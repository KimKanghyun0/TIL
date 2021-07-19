# Operating system 실습 정리

## 개발환경 세팅
* 윈도우 10에서 리눅스 프로그래밍 개발환경
  * WSL2 + VSCode

* WSL2 설치
  * https://docs.microsoft.com/ko-kr/windows/wsl/install-win10

* VSCode
  * https://docs.microsoft.com/ko-kr/windows/wsl/tutorials/wsl-vscode
  
## demo
1. 시스템 요구사항
  * Windows 10
    * x64 시스템의 경우: 버전 1903, 빌드 18362 이상
  
2. WSL/가상며신 기능 켜기
  * Windows 기능 켜기/끄기
    - "Linux용 Windows 하위시스템" 옵션 체크
    - "가상머신 플랫폼" 옵션 체크

3. Linux 커널 업데이트 
  * x64 머신용 최신 WSL2 Linux 커널 업데이트 패키지 다운로드
    - https://wslstorestorage.blob.core.windows.net/wslblob/wsl_update_x64.msi
    
4. Linux 배포판 설치
  * Microsoft Store > 검색 > "Ubuntu"
  * Ubuntu 20.04 LTS 버전 설치 후 실행

5. WSL2를 기본버전으로 설정하기
  * PowerShell 관리자 권한으로 열기
    - wsl 버전 2로 설정
    
      `$ wsl --set-default-version 2`
    - wsl 버전 확인
    
      `$ wsl -l -v`
    
6. 우분투에서 GNU 툴체인 설치
  * 시작 > Ubuntu > Ubuntu 커맨드창에서 
  * GNU 툴체인 설치: gcc/g++/gdb 등의 컴파일러 개발도구들
    - 설치되어 있는 패키지를 모두 새버전으로 업그래이드 
    
      `$ sudo apt-get update`
    - GNU 툴체인 설치 


      `$ sudo apt-get install build-essential gdb`
      
    - 버전확인
      ```
      $ gcc --version
      $ g++ --version
      $ gdb --version
      ```
      
7. Visual Studio Code 설치
  - https://code.visualstudio.com/download
  
8. Remote - WSL 확장팩 설치
  - VSCode 실행
  - 확장 > 검색 > "Remote" 검색
  - "Remote - WSL" 확장팩 설치
  
9. VSCode에서 WSL 연결하기
  - VSCode 좌측 하단 구석에서 "원격 창 열기" >< 클릭
  - "New WSL Window" 선택
  - 탐색기 > 폴더열기 > 새 디렉토리 만들고 연결
  - ubuntu내에 workspace가 만들어짐

10. 리눅스 시스템 프로그래밍
  - 새로 생성된 디렉토리에 hello.c 파일 생성
    ```c
    #include <stdio.h>
    #include <unistd.h>
    #include <sys/wait.h>

    int main()
    {
        pid_t pid; //program ID

        pid = fork(); //child process create
        /* fork() fail > return -1
         * fork() sucess > 1. parent process return child process pid
         *                 2. child process return 0 
         */
        printf("Hello, WSL!\n");
        return 0;
    }
    ```
  - terminal에서 c 컴파일하기
    
    `gcc hello.c`
  - 실행하기
  
    `./a.out`
    
    
