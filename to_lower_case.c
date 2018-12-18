#include "stdio.h"

#define LEN 100

//字符串转换函数
char* toLowerCase(char* str)
{
    char* ret = str;
    while(*str != 0)
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str += 'a' - 'A';
        }
        ++str;
    }
    return ret;
}

int main()
{
    char str[LEN] = {0};
    char* result = str;
    printf("请输入字符串: \n");
    gets(str);
    printf("转换前的字符串打印如下: \n");
    puts(str);
    result = toLowerCase(str);
    printf("转换后的字符串打印如下: \n");
    puts(result);
    return 0;
}
