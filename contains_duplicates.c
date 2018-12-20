#include "stdio.h"
#include "time.h"

#define LEN 10

//数组元素打印
void arrDisplay(int arr[])
{
    int i = 0;
    for(i = 0; i < LEN; ++i)
    {
        printf("%-5d", arr[i]);
        if((i + 1) % 5 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}

/*
//判断数组中是否有重复元素
int containsDuplicates(int arr[])
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for(i = 0; i < LEN; ++i)
    {
        temp = arr[i];
        for(j = i + 1; j < LEN; ++j)
        {
            if(temp == arr[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
*/

//交换函数
void swap(int* p1, int* p2)
{
    int temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//冒牌排序
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

//判断数组中是否有重复元素
int containsDuplicates(int arr[])
{
    int i = 0;
    for(i = 0; i < LEN - 1; ++i)
    {
        if((arr[i] ^ arr[i + 1]) == 0)
        {
            return 1; 
        }
    }
    return 0;
}

int main()
{
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    int i = 0;
    int flag = 0;
    //数组元素的初始化
    for(i = 0; i < LEN; ++i)
    {
        //随机值范围[0, 9]
        arr[i] = 0 + rand() % (100 - 0 + 1);
    }
    printf("初始数组打印如下: \n");
    arrDisplay(arr);
    bubbleSort(arr);
    printf("排序后的数组打印如下: \n");
    arrDisplay(arr);
    flag = containsDuplicates(arr);
    if(flag == 1)
    {
        printf("数组中存在重复元素!\n");
    }
    else
    {
        printf("数组中不存在重复元素!\n");
    }
    return 0;
}
