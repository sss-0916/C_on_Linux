#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 20

//随机数
int randomNumber()
{
    return 11 + rand() % (99 - 11 + 1);
}

//数组初始化
void arrInit(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        arr[i] = randomNumber();
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

//升序
int asc(int num1, int num2)
{
    if(num1 < num2)
    {
        return 1;
    }
    return 0;
}

//降序
int desc(int num1, int num2)
{
    if(num1 > num2)
    {
        return 1;
    }
    return 0;
}

typedef int (*SortRule)(int, int);

//交换
void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

//通用型冒泡排序
void bubbleSort(int arr[], int len, SortRule sort_rule)
{
    int bound = 0;
    for(bound = 0; bound < len; ++bound)
    {
        int cur = 0;
        for(cur = len - 1; cur > bound; --cur)
        {
            if(sort_rule(arr[cur], arr[cur - 1]) == 1)
            {
                swap(&arr[cur], &arr[cur - 1]);
            }
        }
    }
}

int main()
{
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    arrInit(arr, LEN);
    printf("初始数组打印如下: ");
    arrDisplay(arr, LEN);
    bubbleSort(arr, LEN, asc);
    printf("升序后的数组打印如下: ");
    arrDisplay(arr, LEN);
    bubbleSort(arr, LEN, desc);
    printf("降序后的数组打印如下: ");
    arrDisplay(arr, LEN);
    return 0;
}
