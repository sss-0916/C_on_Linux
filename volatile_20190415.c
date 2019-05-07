#include <stdio.h>
#include <unistd.h>
#include <signal.h>

volatile int i = 1;

void myHandler(int signo){
    i = 0;
}

int main(){
    struct sigaction act;
    act.sa_handler = myHandler;
    act.sa_flags = 0;
    sigaction(SIGINT, &act, NULL);
    while(i){
    
    }
    return 0;
}
