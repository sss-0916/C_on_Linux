#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    pid_t pid = fork();
    int status;
    if(pid < 0){
        perror("fork error");
        exit(-1);
    }
    else if(pid == 0){
        //printf("child!\n");
        //printf("子进程正在运行!\n");
        sleep(5);
        exit(0);
    } 
    //wait(&status);
    while(waitpid(pid, &status, WNOHANG) == 0){
        printf("没有退出, 不能打麻将!\n");
        sleep(1);
    }
    while(1){
        printf("退出了, 打麻将!\n");
        sleep(1);
    }
    return 0;
}
