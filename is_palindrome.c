#include "stdio.h"
#include "string.h"

#define LEN 100

//判断回文串
int isPalindrome(char* str)
{
    //先处理字符串
    //将非字母和非数字去掉
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
    //判断回文串
    char* left = str;
    char* right = str + strlen(str) - 1;
    while(left <= right)
    {
        if(*left != *right)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[LEN] = {0};
    int flag = 0;
    printf("请输入字符串: \n");
    gets(str);
    flag = isPalindrome(str);
    if(flag == 1)
    {
        printf("是回文串!\n");
    }
    else
    {
        printf("不是回文串!\n");
    }
    return 0;
}
