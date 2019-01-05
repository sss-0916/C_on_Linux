#include "stdio.h" 

#define M 3
#define N 5
#define LEN 3

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
        printf("%-2d", arr[i]);
    }
    printf("\n");
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

//数组去重
int removeDuplicates(int arr[], int len)
{
    int i = 0;
    int count = 0;
    for(i = 0; i < len; ++i)
    {
        if(arr[count] != arr[i])
        {
            arr[count] = arr[i];
            ++count;
        }
    }
    return count + 1;
}

int main()
{
    int arr1[M] = {4, 9, 5};
    int arr2[N] = {9, 4, 9, 8, 4};
    int result[LEN] = {0};
    printf("数组1打印如下: ");
    arrDisplay(arr1, M);
    printf("数组2打印如下: ");
    arrDisplay(arr2, N);
    quickSort(arr1, 0, M - 1);
    printf("快速排序后的数组1打印如下: ");
    arrDisplay(arr1, M);
    quickSort(arr2, 0, N - 1);
    printf("快速排序后的数组2打印如下: ");
    arrDisplay(arr2, N);
    printf("去除重复元素后的数组1打印如下: ");
    arrDisplay(arr1, removeDuplicates(arr1, M));
    printf("去除重复元素后的数组2打印如下: ");
    arrDisplay(arr2, removeDuplicates(arr2, N));
    return 0;
}
