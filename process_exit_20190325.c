#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main()
{
    pid_t pid = fork();
    if(pid < 0)
    {
        perror("fork error");
        printf("fork error: %s\n", strerror(errno));
    }
    int i;
    for(i = 0; i < 256; ++i)
    {
        printf("errno[%d]: [%s]\n", i, strerror(i));
    }
    printf("hehe\n");
    sleep(1);
    _exit(255);
}
