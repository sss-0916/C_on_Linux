#include <stdio.h>
#include <unistd.h>

int main(){
    printf("hello, world!\n") ;
    pid_t pid = fork();
    if(pid == 0){
        execlp("ls", "ls", "-a", NULL);
    }
    //execlp("ls", "ls", "-l", NULL);
    printf("hehe\n");
    return 0;
}
