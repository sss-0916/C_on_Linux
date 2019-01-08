#include "stdio.h"

#define LEN 10

//数组打印
void arrDisplay(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        if(i % 10 == 0)
        {
            printf("\n");
        }
        printf("%-5d", arr[i]);
    }
    printf("\n");
}

//数组初始化
void arrInit(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        arr[i] = 11 + rand() % (99 - 11 + 1);
    }
}

//清空数组
void emptyArr(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        arr[i] = 0;
    }
}

//交换
void swap(int* p1, int* p2)
{
    int temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//数组逆序
void arrReverse(int arr[], int left, int right)
{
    while(left < right)  
    {
        swap(&arr[left], &arr[right]);
        ++left;
        --right;
    }
}

int main()
{
    int arr[LEN] = {0};
    arrInit(arr, LEN);
    printf("初始化后的数组打印如下: ");
    arrDisplay(arr, LEN);
    printf("逆序后的数组打印如下: ");
    arrReverse(arr, 0, LEN - 1);
    arrDisplay(arr, LEN);
    emptyArr(arr, LEN);
    printf("清空后的数组打印如下: ");
    arrDisplay(arr, LEN);
    return 0;
}
