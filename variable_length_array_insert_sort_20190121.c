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

void insertSort(int* arr, int len)
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

int main()
{
    srand((unsigned int)time(0));

    int* arr = NULL;
    int arr_length = 0;

    printf("请输入数组长度: \n");
    scanf("%d", &arr_length);
    assert(arr_length >= 0);
    arr = (int*)malloc(arr_length * sizeof(int));
    assert(arr != NULL);

    arrInit(arr, arr_length);
    printf("初始数组打印如下: ");
    arrDisplay(arr, arr_length);
    insertSort(arr, arr_length);
    printf("插入排序后的数组打印如下: ");
    arrDisplay(arr, arr_length);

    free(arr);
    arr = NULL;

    return 0;
}
