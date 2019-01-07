#include "stdio.h"
#include "string.h"

#define LEN 100

//字符串逆置
void reverse(char* left, char* right)
{
    while(left < right)
    {
        char temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }
}

//循环左移
void rotateLeft(char arr[], int n)
{
    int len = strlen(arr);
    //前n位逆置
    reverse(arr, arr + n - 1);
    //剩下的部分逆置
    reverse(arr + n, arr + len - 1);
    //整体逆置
    reverse(arr, arr + len - 1);
}

int main()
{
    char arr[LEN] = "hello, world!";
    int n = 0;
    printf("初始字符串打印如下: \n");
    puts(arr);
    printf("请输入循环左移的位数: \n");
    scanf("%d", &n);
    rotateLeft(arr, n);
    printf("循环右移%d位后的字符串打印如下: \n", n);
    puts(arr);
    return 0;
}
