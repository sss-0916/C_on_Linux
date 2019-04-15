#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    pid_t pid = fork();
    if(pid == 0){
        execl("/bin/ls", "ls", "-l", NULL);
    }
    //execl("/bin/ls", "ls", "-l", NULL);
    printf("hello, world!\n");
    return 0;
}
