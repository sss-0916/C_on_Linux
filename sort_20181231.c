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

//交换
void swap(int* p1, int* p2)
{
    int temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//冒泡排序
void bubbleSort(int arr[], int len)
{
    int bound = 0;
    int cur = 0;
    for(bound = 0; bound < len; ++bound)
    {
        for(cur = len - 1; cur > bound; --cur)
        {
            if(arr[cur] < arr[cur - 1])
            {
                swap(&arr[cur], &arr[cur - 1]);
            }
        }
    }
}

//快速排序
void quickSort(int arr[], int left, int right)
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

//选择排序
void selectSort(int arr[], int len)
{
    int i = 0;
    int j = 0;
    int min = 0;
    for(i = 0; i < len; ++i) 
    {
        min = i;
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

//插入排序
void insertSort(int arr[], int len)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for(i = 1; i < len; ++i)
    {
        if(arr[i] < arr[i - 1])
        {
            temp = arr[i];
            for(j = i - 1; j >= 0 && arr[j] > temp; --j)
            {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = temp;
        }
    }
}

//希尔排序
void shellSort(int arr[], int len)
{
    int i = 0; 
    int j = 0;
    int k = 0;
    int temp = 0;
    int gap = 0;
    //分成gap组
    for(gap = len / 2; gap > 0; gap = gap / 2)
    {
        //gap组分别进行插入排序
        for(i = 0; i < gap; ++i)
        {
            //插入排序
            for(j = i + gap; j < len; j = j + gap)
            {
                if(arr[j] < arr[j - 1])
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
        //随机值范围[11, 99]
        arr[i] = 11 + rand() % (99 - 11 + 1);
    }
    printf("初始数组打印如下: ");
    arrDisplay(arr, LEN);
    //bubbleSort(arr, LEN);
    //quickSort(arr, 0, LEN - 1);
    //selectSort(arr, LEN);
    //insertSort(arr, LEN);
    shellSort(arr, LEN);
    printf("排序后的数组打印如下: ");
    arrDisplay(arr, LEN);
    return 0;
}
