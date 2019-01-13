#include "stdio.h"
#include "time.h"

#define LEN 40

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

//快速排序
void quickSortDesc(int arr[], int left, int right)
{
    //出口
    if(left > right)
    {
        return;
    }
    int i = left;
    int j = right;
    int value = arr[left];
    while(i < j)
    {
        while(i < j && arr[j] <= value)
        {
            --j;
        }
        arr[i] = arr[j];
        while(i < j && arr[i] >= value)
        {
            ++i;
        }
        arr[j] = arr[i];
    }
    arr[i] = value;
    quickSortDesc(arr, left, i - 1);
    quickSortDesc(arr, i + 1, right);
}

int main()
{
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    int i = 0;
    for(i = 0; i < LEN; ++i)
    {
        arr[i] = 11 + rand() % (99 - 11 + 1);
    }
    printf("初始数组打印如下: ");
    arrDisplay(arr, LEN);
    quickSortDesc(arr, 0, LEN - 1);
    printf("快速排序后的数组打印如下: ");
    arrDisplay(arr, LEN);
    return 0;
}
