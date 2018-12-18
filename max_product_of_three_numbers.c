#include "stdio.h"
#include "time.h"

#define LEN 100

//数组打印
void arrDisplay(int arr[])
{
    int i = 0;
    for(i = 0; i < LEN; ++i)
    {
        printf("%-5d", arr[i]);
        if((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
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

//求两个数中的最大值
int max(int n1, int n2)
{
    return n1 > n2 ? n1 : n2;
}

//求数组中三个数的最大乘积函数
int maxProduct(int arr[])
{
    return max(arr[0] * arr[1] * arr[LEN - 1],
           arr[LEN - 1] * arr[LEN - 2] * arr[LEN - 3]);
}

int main()
{
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    int i = 0;
    int result = 0;
    //数组元素的初始化
    for(i = 0; i < LEN; ++i)
    {
        //随机数值范围[-100, 100]
        arr[i] = -100 + rand() % (100 - (-100) + 1);
    }
    printf("初始数组打印如下: \n");
    arrDisplay(arr);
    printf("排序后的数组打印如下: \n");
    bubbleSort(arr);
    arrDisplay(arr);
    result = maxProduct(arr);
    printf("三个数的最大乘积为: %d\n", result);
    return 0;
}
