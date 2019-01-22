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

void shellSort(int* arr, int len)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int gap = 0;
    int temp = 0;

    for(gap = len / 2; gap > 0; gap /= 2)
    {
        for(i = 0; i < gap; ++i)
        {
            for(j = i + gap; j < len; j += gap)
            {
                if(arr[j] < arr[j - gap])
                {
                    temp = arr[j];
                    for(k = j - gap; k >= 0 && arr[k] > temp; k -= gap)
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

    int* arr = NULL;
    int arr_length = 0;

    printf("请输入数组的长度: \n");
    scanf("%d", &arr_length);
    assert(arr_length >= 0);
    arr = (int*)malloc(sizeof(int) * arr_length);
    assert(arr != NULL);

    arrInit(arr, arr_length);
    printf("初始数组打印如下: ");
    arrDisplay(arr, arr_length);
    shellSort(arr, arr_length);
    printf("希尔排序后的数组打印如下: ");
    arrDisplay(arr, arr_length);

    free(arr);
    arr = NULL;

    return 0;
}
