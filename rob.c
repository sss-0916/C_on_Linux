#include "stdio.h"

#define LEN 50

//数组打印
void arrDisplay(int arr[])
{
    int i = 0;
    for(i = 0; i < LEN; ++i)
    {
        printf("%-2d", arr[i]);
        if((i + 1) % 10 == 0)
        {
            printf("\n");
        }   
    }
}

//打家劫舍
int rob(int arr[], int len)
{
    if(len <= 0) 
    {
        return 0;
    }
    if(len == 1)
    {
        return arr[0];
    }
    int temp[LEN] = {0};
    int i = 0;
    temp[0] = arr[0];
    temp[1] = (arr[0] >= arr[1] ? arr[0] : arr[1]);
    for(i = 2; i < len; ++i)
    {
        temp[i] = (arr[i] + temp[i - 2] > temp[i - 1] ? arr[i] + 
                     temp[i - 2] : temp[i - 1]);
    }
    return temp[i - 1];
}

int main()
{
    int arr[LEN] = {0};
    int i = 0;
    int result = 0;
    //数组元素的初始化
    for(i = 0; i < LEN; ++i)
    {
        //随机数范围[2, 8]
        arr[i] = 2 + rand() % (8 - 2 + 1);
    }
    printf("连续50家的可被偷现金如下: \n");
    arrDisplay(arr);
    result = rob(arr, LEN);
    printf("能偷到的最高金额为: %d\n", result);
    return 0;
}
