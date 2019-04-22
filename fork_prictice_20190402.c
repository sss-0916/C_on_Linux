#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int a = 100;
    printf("parent pid: %d\n", getpid());
    pid_t pid = fork();
    if(pid < 0){
        return -1;
    }
    else if(pid == 0){
        printf("child pid: %d\n", getpid());
        a = 10;
    }
    else{
        printf("parent pid: %d\n", getpid());
    }
    printf("%d\n", a);
    return 0;
}
