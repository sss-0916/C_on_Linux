#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("parent pid: %d\n", getpid());
    int a = 100;
    pid_t pid = fork();
    if(pid < 0)
    {
        return -1;
    }
    else if(pid == 0)
    {
        a = 20;
        printf("child process! pid: %d, a: %d, &a:  %p\n",
                getpid(), a, &a);
    }
    else
    {
        sleep(1);
        printf("parent process! pid: %d, a: %d, &a: %p\n", 
                getpid(), a, &a);
    }
    return 0;
}
