#include "stdio.h"
#include "time.h"

#define LEN 10

//数组打印函数
void arrDisplay(int arr[])
{
    int i = 0;
    for(i = 0; i < LEN; ++i)
    {
        printf("%-2d", arr[i]);
    }
    printf("\n");
}

//交换函数
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

//第三大的数
int thirdMax(int arr[])
{
    if(LEN < 3)
    {
        return arr[LEN - 1];
    }
    else
    {
        return arr[LEN - 3];
    }
}

int main()
{
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    int i = 0;
    int third_max = 0;
    //数组元素的初始化
    for(i = 0; i < LEN; ++i)
    {
        //随机值范围[1, 9]
        arr[i] = 1 + rand() % (9 - 1 + 1);
    }
    printf("初始数组打印如下: \n");
    arrDisplay(arr);
    bubbleSort(arr);
    printf("排序后的数组打印如下: \n");
    arrDisplay(arr);
    third_max = thirdMax(arr);
    printf("结果打印如下: %d\n", third_max);
    return 0;
}
