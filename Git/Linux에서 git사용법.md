# Linux에서 git사용법(우분투)
## git 설치
```
$ sudo apt install git-all
```

## git 최초 설정 
```
/etc/gitconfig 파일에 저장됨
$ sudo git config --global user.name "kanghyunkim0"
$ sudo git config --global user.email "kanghyunkim0@gmail.com"
$ sudo git config --global color.ui "auto"
```
## 작업폴더 생성
```
$ mkdir /works
# cd /works
```

## github 저장소 만들기
1. 현재 디렉토리를 git 저장소로 만들기
    ```
    $ git init
    ```
    로컬 컴퓨터와 저장소 간 링크 연결하기(init으로 시작한 경우에만)
    ```
    # git remote add origin https://github.com/KimKanghyun0/TIL.git
    ```
1. **github에 이미 생성된 레포지토리를 로컬 디렉토리에 복제**
    ```
    $ git clone https://github.com/KimKanghyun0/TIL.git
    ```

## 작업한 파일 선정하기 (스테이징)
```
$ git add <추가할 파일 이름>
$ git add -A 
$ git add . //현재 디렉토리에 있는 업데이트된 파일을 스테이징으로
```

## 선정된 파일 묶음으로 만들어 설명 달기 (커밋)
```
$ git commit -m "작업내용 설명"
```

## 작업내용 Github에 올리기 (푸쉬)
```
$ git push
$ git push <저장소명> <브랜치명>
```

## 저장소 업데이트 (풀)
```
$ git pull
```

## 상태확인
```
$ git status
```

# reference
https://git-scm.com/book/ko/v2