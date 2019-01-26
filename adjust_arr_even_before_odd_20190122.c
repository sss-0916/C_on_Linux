#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

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

void adjustArrEvenBeforeOdd(int* left, int* right)
{
    while(left < right)
    {
        while(*left % 2 == 1)
        {
            ++left;
        }
        while(*right % 2 == 0)
        {
            --right;
        }
        if(left < right)
        {
            swap(left, right);
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
    adjustArrEvenBeforeOdd(arr, arr + arr_length - 1);
    printf("调整后的数组打印如下: ");
    arrDisplay(arr, arr_length);

    free(arr);
    arr = NULL;

    return 0;
}
