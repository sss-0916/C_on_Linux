#include "stdio.h"
#include "time.h"

#define LEN 6

//数组打印
void arrDisplay(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

//加一
void plusOne(int arr[])
{
    int i = 0;
    ++arr[LEN - 2];
    for(i = LEN - 2; i > 0; --i)
    {
        if(arr[i] > 9)
        {
            arr[i] %= 10;
            ++arr[i - 1];
        }
    }
}

int main()
{
    //设置随机种子
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    int i = 0;
    //数组的初始化
    for(i = 0; i < LEN - 1; ++i)
    {
        //[1, 9]范围的随机数
        arr[i] = 1 + rand() % (9 - 1 + 1);
    }
    printf("初始数组打印如下: \n");
    arrDisplay(arr, LEN - 1);
    plusOne(arr); 
    printf("加一后的数组打印如下: \n");
    arrDisplay(arr, LEN - 1);
    return 0;
}
