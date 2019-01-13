#include "stdio.h"
#include "string.h"

#define LEN 100

//交换
void swap(char* p1, char* p2)
{
    char temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//字符串反转
char* reverseString(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;
    while(left <= right)
    {
        swap(&str[left], &str[right]);
        ++left;
        --right;
    }
    return str;
}

int main()
{
    char str[LEN] = {0};
    char* result = NULL;
    printf("请输入字符串: \n");
    gets(str);
    result = reverseString(str);
    printf("反转后的字符串打印如下: \n");
    puts(result);
    return 0;
}
