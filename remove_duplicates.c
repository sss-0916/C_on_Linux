#include "stdio.h"
#include "time.h"

#define LEN 10

void arrDisplay(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        printf("%-2d", arr[i]);
    }
    printf("\n");
}

void swap(int* p1, int* p2)
{
    int temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void bubbleSort(int arr[])
{
    int bound = 0;
    for(bound = 0; bound < LEN; ++bound)
    {
        int cur = 0;
        for(cur = LEN - 1; cur > bound; --cur)
        {
            if(arr[cur] < arr[cur - 1])
            {
                swap(&arr[cur], &arr[cur - 1]);
            }
        }
    }
}

//删除数组中的重复元素
int removeDuplicates(int arr[])
{
    if(LEN == 0)
    {
        return 0;
    }
    int i = 0;
    int count = 0;
    for(i = 0; i < LEN; ++i)
    {
        if(arr[i] != arr[count])
        {
            ++count;
            arr[count] = arr[i];
        }
    }
    return count + 1;
}

int main()
{
    //随机种子
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    int i = 0;
    int len = 0;
    //数组元素的初始化
    for(i = 0; i < LEN; ++i)
    {
        //产生[1, 9]的元素
        arr[i] = 1 + rand() % (9 - 1 + 1); 
    }
    printf("初始数组打印如下: \n");
    arrDisplay(arr, LEN);
    bubbleSort(arr);
    printf("排序后的数组打印如下: \n");
    arrDisplay(arr, LEN);
    len = removeDuplicates(arr); 
    printf("删除重复元素后的数组如下: \n");
    arrDisplay(arr, len);
    return 0;
}
