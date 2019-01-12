#include "stdio.h"

#define LEN 100

//字符串拷贝函数
void myStrcpy(char* dest, char* src)
{
    while(*src != '\0')
    {
        *dest = *src;
        ++dest;
        ++src;
    }
}

int main()
{
    //char str1[LEN] = "hello, world!";
    //char str2[LEN] = {0};
    //printf("初始字符串打印如下: \n");
    //puts(str1);
    //puts(str2);
    //myStrcpy(str2, str1);
    //printf("拷贝后的字符串打印如下: \n");
    //puts(str1);
    //puts(str2);
    char str1[LEN] = {0};
    char str2[LEN] = {0};
    printf("请输入字符串1: \n");
    gets(str1);
    myStrcpy(str2, str1);
    printf("拷贝后的两个字符串打印如下: \n");
    puts(str1);
    puts(str2);
    return 0;
}
