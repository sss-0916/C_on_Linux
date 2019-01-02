#include "stdio.h"
#include "time.h"

#define LEN 100

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

//插入排序从大到小
void insertSortDesc(int arr[], int len)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for(i = 1; i < len; ++i)
    {
        if(arr[i] > arr[i - 1])
        {
            temp = arr[i];
            for(j = i - 1; j >= 0 && arr[j] < temp; --j)
            {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = temp;
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
    insertSortDesc(arr, LEN);
    printf("插入排序后的数组打印如下: ");
    arrDisplay(arr, LEN);
    return 0;
}
