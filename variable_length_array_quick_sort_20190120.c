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

void quickSort(int* arr, int left, int right)
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
    srand((unsigned int)time(0));

    int* arr = NULL;
    int number_elements = 0;

    printf("请输入数组的长度: ");
    scanf("%d", &number_elements);
    assert(number_elements >= 0);
    arr = (int*)malloc(sizeof(int) *
            number_elements);
    assert(arr != NULL);

    arrInit(arr, number_elements);
    printf("初始数组打印如下: ");
    arrDisplay(arr, number_elements);
    quickSort(arr, 0, number_elements - 1);
    printf("快速排序后的数组打印如下: ");
    arrDisplay(arr, number_elements);

    free(arr);
    
    return 0;
}
