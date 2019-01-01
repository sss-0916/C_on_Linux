#include "stdio.h"

#define LEN 100

//字符串调整
char* stringAdjust(char* str)
{
    int i = 0;
    int j = 0;
    while(str[i] != 0)
    {
        if(str[i] >= 'a' && str[i] <= 'z' ||
           str[i] >= 'A' && str[i] <= 'Z' ||
           str[i] >= '0' && str[i] <= '9')
        {
            str[j] = str[i];
            ++j;
        }
        ++i;
    }
    str[j] = '\0';
    return str;
}

int main()
{
    char str[LEN] = {0};
    char* result = NULL;
    printf("请输入字符串: \n");
    gets(str);
    result = stringAdjust(str);
    printf("调整后的数组打印如下: \n");
    puts(result);
    return 0;
}
