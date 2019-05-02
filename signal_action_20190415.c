#include <stdio.h>
#include <unistd.h>
#include <signal.h>

struct sigaction act, old;

void myHandler(int signo){
    printf("my handler!\n");
    sigaction(signo, &old, NULL);
}

int main(){
    act.sa_handler = myHandler;
    act.sa_flags = 0;
    sigemptyset(&act.sa_mask);
    sigaction(SIGINT, &act, &old);
    while(1){
        printf("hello, world!\n");
        sleep(1);
    }
    return 0;
}
