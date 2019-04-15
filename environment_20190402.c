#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* env[]){
    // 方法一
    int i = 0;
    //for(i = 0; env[i] != NULL; ++i)
    //{
    //    printf("[%d]: [%s]\n", i, env[i]);
    //}
    // 方法二
    //extern char** environ;
    //for(i = 0; environ[i] != NULL; ++i){
    //    printf("[%d]: [%s]\n", i, environ[i]);
    //}
    // 方法三
    printf("%s\n", getenv("HOME"));
    return 0;
}
