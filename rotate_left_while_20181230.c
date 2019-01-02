#include "stdio.h"
#include "string.h"

#define LEN 100

//循环左移n位
void rotateLeft(char arr[], int n)
{
    char temp = 0;
    int i = 0;
    for(i = 0; i < n; ++i)
    {
        char* cur = arr;
        temp = *arr;
        while(*(cur + 1) != '\0')
        {
            *cur = *(cur + 1);
            ++cur;
        }
        *cur = temp;
    }
}

int main()
{
    char str[LEN] = "hello, world!";
    int n = 0;
    printf("初始字符串打印如下: \n");
    puts(str);
    printf("请输入循环左移的位数: \n");
    scanf("%d", &n);
    printf("循环左移%d位后的字符串打印如下: \n", n);
    rotateLeft(str, n);
    puts(str);
    return 0;
}
