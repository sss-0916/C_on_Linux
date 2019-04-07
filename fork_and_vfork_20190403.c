#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    printf("hehe\n");
    int i = 0;
    for(i = 0; i < 255; ++i){
        printf("error: [%s]\n", strerror(i));
        sleep(1);
    }
    //pid_t pid = fork();
    //pid_t pid = vfork();
    //if(pid == 0){
        //printf("child process!\n");
        //printf("pid: %d\n", pid);
    //}
    //else{
        //printf("parent process!\n");
        //printf("pid: %d\n", pid);
    //}
}
