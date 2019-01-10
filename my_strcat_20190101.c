#include "stdio.h"

#define LEN 100

//字符串拼接函数
void myStrcat(char* dest, char* src)
{
    while(*dest != '\0')
    {
        ++dest;
    }
    while(*src != 0)
    {
        *dest = *src;
        ++dest;
        ++src;
    }
}

int main()
{
    char str1[LEN] = "hello, ";
    char str2[LEN] = "world!";
    char str3[LEN] = {0};
    char str4[LEN] = {0};
    printf("未拼接前的字符串打印如下: \n");
    puts(str1);
    puts(str2);
    myStrcat(str1, str2);
    printf("拼接后的字符串打印如下: \n");
    puts(str1);
    printf("请输入字符串1: \n");
    gets(str3);
    printf("请输入字符串2: \n");
    gets(str4);
    myStrcat(str3, str4);
    printf("拼接后的字符串打印如下: \n");
    puts(str3);
    return 0;
}
