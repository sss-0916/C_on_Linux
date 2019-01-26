#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "assert.h"

int randomNumber()
{
    return 11 + rand() % (99 - 11 + 1);
}

void arrInit(int* arr, int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        arr[i] = randomNumber();
    }
}

void arrDisplay(int* arr, int len)
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

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int* arr, int len)
{
    int bound = 0;
    for(bound = 0; bound < len; ++bound)
    {
        int cur = 0;
        for(cur = len - 1; cur > bound; --cur)
        {
            if(arr[cur] < arr[cur - 1])
            {
                swap(&arr[cur], &arr[cur - 1]);
            }
        }
    }
}

int main()
{
    srand((unsigned int)time(0));

    int* arr = NULL;
    int arr_length = 0;

    printf("请输入数组长度: \n");
    scanf("%d", &arr_length);
    assert(arr_length >= 0);
    arr = (int*)malloc(sizeof(int) * arr_length);
    assert(arr != NULL);

    arrInit(arr, arr_length);
    printf("初始数组打印如下: ");
    arrDisplay(arr, arr_length);
    bubbleSort(arr, arr_length);
    printf("冒泡排序后的数组打印如下: ");
    arrDisplay(arr, arr_length);

    free(arr);
    arr = NULL;

    return 0;
}
