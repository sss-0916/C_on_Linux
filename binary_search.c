#include "stdio.h"

#define LEN 100

//二分查找
void binarySearch(int target, int arr[])
{
    int left = 0;
    int right = LEN;
    int mid = 0;
    while(left <= right)
    {
        mid = (left + right) / 2;
        if(target > arr[mid])
        {
            left = mid + 1;
        }
        else if(target < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            printf("在数组中找到了元素%d\n", target);
            printf("下标为: %d\n", mid);
            break;
        }
    }
    if(left > right)
    {
        printf("元素未找到!\n"); 
    }
}

//元素交换
void swap(int* p1, int* p2)
{
    int temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//冒泡排序
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

//数组打印
void arrayDisplay(int arr[])
{
    int i = 0;
    for(i = 0; i < LEN; ++i)
    {
        printf("%-3d", arr[i]);
        if((i + 1) % 10 == 0)
        {
            printf("\n");
        } 
    }
    printf("\n");
}

int main()
{
    int value = 0;
    //设置随机种子
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    int i = 0;
    printf("请输入要查找的元素: \n");
    scanf("%d", &value);
    //数组的初始化
    for(i = 0; i < LEN; ++i)
    {
        //使用[1, 99]随机数对数组进行初始化
        arr[i] = 1 + rand() % (99 - 1 + 1);
    }
    printf("初始数组打印如下: \n");
    arrayDisplay(arr);
    bubbleSort(arr);
    printf("已序数组打印如下: \n");
    arrayDisplay(arr);
    binarySearch(value, arr);
    return 0;
}
