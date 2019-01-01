#include "stdio.h"
#include "time.h"

#define LEN 20

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

void swap(int* p1, int* p2)
{
    int temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//选择排序
void selectionSort(int arr[], int len)
{
    int i = 0;
    int j = 0;
    int min = 0;
    for(i = 0; i < len; ++i)
    {
        min = i;
        //寻找最小值
        for(j = i + 1; j < len; ++j)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        if(min != i)
        {
            swap(&arr[min], &arr[i]);
        }
    }
}

int main()
{
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    int i = 0;
    //数组元素的初始化
    for(i = 0; i < LEN; ++i)
    {
        //随机数范围[11, 99]
        arr[i] = 11 + rand() % (99 - 11 + 1);
    }
    printf("初始数组打印如下: \n");
    arrDisplay(arr, LEN);
    selectionSort(arr, LEN);
    printf("选择排序后的数组打印如下: \n");
    arrDisplay(arr, LEN);
    return 0;
}
