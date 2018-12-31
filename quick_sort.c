#include "stdio.h"

#define LEN 8

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
        printf("%-3d", arr[i]);
    }
    printf("\n");
}

//快速排序
void quickSort(int arr[], int left, int right)
{
    if(left > right)
    {
        return;
    }
    int i = left;
    int j = right;
    int value = arr[left];
    while(i < j)
    {
        while(i < j && arr[j] >= value)
        {
            --j;
        }
        arr[i] = arr[j];
        while(i < j && arr[i] <= value)
        {
            ++i;
        }
        arr[j] = arr[i];
    }
    arr[i] = value;
    quickSort(arr, left, i - 1);
    quickSort(arr, i + 1, right);
}

int main()
{
    int arr[LEN] = {49, 38, 65, 97,
        76, 13, 27, 49};
    printf("初始数组打印如下: \n");
    arrDisplay(arr, LEN);
    quickSort(arr, 0, LEN - 1);
    printf("快速排序后的数组打印如下: \n");
    arrDisplay(arr, LEN);
    return 0;
}
