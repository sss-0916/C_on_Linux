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

//交换
void swap(int* p1, int* p2)
{
    int temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//选择排序从大到小
void selectSortDesc(int arr[], int len)
{
    int i = 0;
    int j = 0;
    int max = 0;
    for(i = 0; i < len; ++i)
    {
        max = i;
        for(j = i + 1; j < len; ++j)
        {
            if(arr[max] < arr[j])
            {
                max = j;
            }
        }
        if(max != i)
        {
            swap(&arr[max], &arr[i]);
        }
    }
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
    selectSortDesc(arr, LEN);
    printf("选择排序后的数组打印如下: ");
    arrDisplay(arr, LEN);
    return 0;
}
