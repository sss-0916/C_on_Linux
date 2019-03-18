#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("father: %d\n", getpid());
    pid_t pid = fork();
    if(pid < 0)
    {
        return -1;
    }
    else if(pid == 0)
    {
        printf("child: %d\n", getpid());
    }
    else
    {
        printf("father: %d\n", getpid());
    }
    printf("hehe\n");
}
