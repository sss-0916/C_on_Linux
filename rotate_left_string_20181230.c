#include "stdio.h"
#include "string.h"

//循环左移一位
void rotateLeftOne(char arr[], int len)
{
    char temp = 0;
    int i = 0;
    temp = arr[0];
    for(i = 0; i < len - 1; ++i)
    {
        arr[i] = arr[i + 1];
    }
    arr[len - 1] = temp;
}

//循环左移n位
void rotateLeft(char arr[], int len, int n)
{
    int i = 0;
    for(i = 0; i < n; ++i)
    {
        rotateLeftOne(arr, len);
    }
}

int main()
{
    char arr[] = "hello, world!";
    int n = 0;
    int len = strlen(arr);
    printf("初始字符串打印如下: \n");
    puts(arr);
    printf("请输入循环左移的位数: \n");
    scanf("%d", &n);
    printf("循环左移%d位后的数组打印如下: \n", n);
    rotateLeft(arr, len, n);
    puts(arr);
    return 0;
}
