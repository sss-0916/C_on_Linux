#include "stdio.h"
#include "time.h"

#define LEN 20

//数组初始化
void arrInit(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        //随机值范围[11, 99]
        arr[i] = 11 + rand() % (99 - 11 + 1);
    }
}

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

//交换
void swap(int* p1, int* p2)
{
    int temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//数组交换
void swapArr(int arr1[], int arr2[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        swap(&arr1[i], &arr2[i]);
    }
}

int main()
{
    srand((unsigned int)time(0));
    int arr1[LEN] = {0};
    int arr2[LEN] = {0};
    arrInit(arr1, LEN);
    arrInit(arr2, LEN);
    printf("数组1打印如下: ");
    arrDisplay(arr1, LEN);
    printf("数组2打印如下: ");
    arrDisplay(arr2, LEN);
    swapArr(arr1, arr2, LEN);
    printf("交换后的数组1打印如下: ");
    arrDisplay(arr1, LEN);
    printf("交换后的数组2打印如下: ");
    arrDisplay(arr2, LEN);
    return 0;
}
