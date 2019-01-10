#include "stdio.h"
#include "time.h"

#define LEN 30

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

//希尔排序
void shellSort(int arr[], int len)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int gap = 0;
    int temp = 0;
    for(gap = len / 2; gap > 0; gap = gap / 2)
    {
        for(i = 0; i < gap; ++i)
        {
            for(j = i + gap; j < len; j = j + gap)
            {
                if(arr[j] < arr[j - gap])
                {
                    temp = arr[j];
                    for(k = j - gap; k >= 0 && arr[k] > temp; k = k - gap)
                    {
                        arr[k + gap] = arr[k];
                    }
                    arr[k + gap] = temp;
                }
            }
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
    shellSort(arr, LEN);
    printf("希尔排序后的数组打印如下: ");
    arrDisplay(arr, LEN);
    return 0;
}
