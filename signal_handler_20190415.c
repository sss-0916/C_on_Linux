#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void myHandler(int signo){
    printf("my handler!\n");
}

int main(){
    signal(2, myHandler);
    while(1){
        printf("hello, world!\n");
        sleep(1);
    }
}
