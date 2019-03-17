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
        printf("%-5d", arr[i]);
    }
    printf("\n");
}

int asc(int* p1, int* p2)
{
    return *p1 < *p2;
}

int desc(int* p1, int* p2)
{
    return *p1 > *p2;
}

typedef int (*Cmp)(int*, int*);

void swap(int* p1, int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void bubbleSort(int* arr, int len, Cmp cmp)
{
    int bound = 0;
    for(bound = 0; bound < len; ++bound)
    {
        int cur = 0;
        for(cur = len - 1; cur > bound; --cur)
        {
            if(cmp(&arr[cur], &arr[cur - 1]))
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
    int len = 0;
    printf("Please input the length of the array: \n");
    scanf("%d", &len);
    assert(len >= 0);
    arr = (int*)malloc(sizeof(int) * len);
    assert(arr != NULL);
    arrInit(arr, len);
    printf("The origin array is: \n");
    arrDisplay(arr, len);
    bubbleSort(arr, len, asc);
    printf("The array after asc sort is: \n");
    arrDisplay(arr, len);
    bubbleSort(arr, len, desc);
    printf("The array after desc sort is: \n");
    arrDisplay(arr, len);
    free(arr);
    arr = NULL;
    return 0;
}
