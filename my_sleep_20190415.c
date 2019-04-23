#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void myHandler2(int signo){
    sleep(10);
}

void myHandler(int signo){

}

void mySleep(int nsec){
    struct sigaction act, old_act;
    act.sa_handler = myHandler;
    act.sa_flags = 0;
    sigaction(SIGALRM, &act, &old_act);
    sigset_t set, old;
    sigemptyset(&set);
    sigprocmask(SIG_BLOCK, &set, &old);
    alarm(nsec);
    sigprocmask(SIG_UNBLOCK, &set, &old);
    sigset_t mask;
    sigsuspend(&mask);
    sigprocmask(SIG_SETMASK, &old, NULL);
    sigaction(SIGALRM, &old_act, NULL);
}

int main(){
    struct sigaction act;
    act.sa_handler = myHandler2;
    act.sa_flags = 0;
    sigaction(SIGQUIT, &act, NULL);
    mySleep(3);
    printf("wake up!\n");
    return 0;
}
