#include <stdio.h>
#include <signal.h>

void myHandler(int signo){
    printf("recv signo: %d\n", signo);
}

int main(){
    struct sigaction act;
    act.sa_handler = myHandler;
    act.sa_flags = 0;
    sigaction(SIGINT, &act, NULL);
    sigaction(SIGQUIT, &act, NULL);
    sigaction(SIGRTMIN+5, &act, NULL);
    sigset_t set, old_set;
    sigemptyset(&set);
    sigfillset(&set);
    sigprocmask(SIG_BLOCK, &set, &old_set);
    printf("press ENTER to unblock!\n");
    getchar();
    sigset_t pending;
    sigpending(&pending);
    int i;
    for(i = 1; i <= 64; ++i){
        if(sigismember(&pending, i)){
            printf("1 ");
        }
        else{
            printf("0 ");
        }
    }
    printf("\n");
    sigprocmask(SIG_UNBLOCK, &set, NULL);
    return 0;
}
