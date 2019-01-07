#include "stdio.h"
#include "time.h"
#include "limits.h"

#define LEN 30

//数组初始化
void arrInit(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        //随机值范围[11, 99]
        arr[i] = 11 + rand() % (99 - 11 + 1);
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
        printf("%-5d", arr[i]);
    }
    printf("\n");
}

//最大值
int maxNumber(int arr[], int len)
{
    int max = INT_MIN;
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    int max = 0;
    arrInit(arr, LEN);
    printf("数组打印如下: ");
    arrDisplay(arr, LEN);
    max = maxNumber(arr, LEN);
    printf("最大值为: %d\n", max);
    return 0;
}
