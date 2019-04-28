#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    pid_t pid = vfork();
    if(pid == 0)
    {
        printf("children process! pid: %d\n", getpid());
    }
    //else if(pid < 0)
    //{
    //    return -1;
    //}
    else
    {
        printf("parent process! pid: %d\n", getpid());
    }
    exit(0);
    // 使用return 0; 退出会出问题, 子进程退出后会释放资源
    // 由于使用vfork()创建的父子进程公用虚拟地址空间, 
    // 子进程释放资源会导致父进程陷入混乱或错误
    //return 0;
}
