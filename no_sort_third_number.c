#include "stdio.h"
#include "limits.h"

#define LEN 4

//第三大的数
int thirdNumber(int arr[], int len)
{
    int i = 0;
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    for(i = 0; i < len; ++i)
    {
        if(arr[i] > first) 
        {
            first = arr[i];
        }
    }
    for(i = 0; i < len; ++i)
    {
        if(arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    for(i = 0; i < len; ++i)
    {
        if(arr[i] > third && arr[i] != first && arr[i] != second)
        {
            third = arr[i];
        }
    }
    if(third != INT_MIN)
    {
        return third;
    }
    else
    {
        return first;
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

int main()
{
   int arr[LEN] = {2, 2, 1, 3};
   int result = 0;
   printf("数组打印如下: ");
   arrDisplay(arr, LEN);
   quickSort(arr, 0, LEN - 1);
   printf("排序后的数组打印如下: ");
   arrDisplay(arr, LEN);
   result = thirdNumber(arr, LEN);
   printf("结果为: %d\n", result);
   return 0;
}
