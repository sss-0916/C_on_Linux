#include <stdio.h>
#include <stdlib.h>

// 获取环境变量
int main(int argc, char* argv[], char* env[])
{
    //int i;
    // 方法一
    //for(i = 0; env[i] != NULL; ++i)
    //{
    //    printf("env[%d] = [%s]\n", i, env[i]);
    //}
    // 方法二
    //extern char** environ; 
    //for(i = 0; environ[i] != NULL; ++i)
    //{
    //    printf("[%d]: [%s]\n", i, environ[i]);
    //}
    // 方法三
    printf("%s\n", getenv("HOME"));
    return 0;
}
