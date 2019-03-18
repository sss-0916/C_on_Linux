#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int randomNumber()
{
    return 1 + rand() % (9 - 1 + 1);
}

void arrInit(int* arr, int len)
{
    if(arr == NULL)
    {
        return;
    }
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        arr[i] = randomNumber();
    }
}

void arrDisplay(int* arr, int len)
{
    if(arr == NULL)
    {
        return;
    }
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        printf("%-3d", arr[i]);
    }
    printf("\n");
}

void quickSort(int* arr, int left, int right)
{
    if(arr == NULL)
    {
        return;
    }
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

int* twoSum(int* arr, int len, int sum)
{
    if(arr == NULL)
    {
        return NULL;
    }
    int* ret = (int*)malloc(sizeof(int) * 2);
    int i = 0;
    int j = 0;
    for(i = 0; i < len; ++i)
    {
        for(j = i + 1; j < len; ++j)
        {
            if(sum == arr[i] + arr[j])
            {
                ret[0] = arr[i];
                ret[1] = arr[j];
                return ret;
            }
        }
    }
    return NULL;
}

int main()
{
    srand((unsigned int)time(0));
    int* arr = NULL;
    int len = 0;
    int* ret = NULL;
    int sum = 0;
    printf("Please input the length of the array: \n");
    scanf("%d", &len);
    assert(len >= 0);
    arr = (int*)malloc(sizeof(int) * len);
    assert(arr != NULL);
    arrInit(arr, len);
    quickSort(arr, 0, len - 1);
    printf("The sorted array is: \n");
    arrDisplay(arr, len);
    sum = 2 * randomNumber();
    printf("The sum is: %d\n", sum);
    ret = twoSum(arr, len, sum);
    if(ret == NULL)
    {
        printf("Failed!\n");
    }
    else
    {
        printf("%d + %d = %d\n", ret[0], ret[1], sum);
    }
    free(arr);
    arr = NULL;
    free(ret);
    ret = NULL;
}
