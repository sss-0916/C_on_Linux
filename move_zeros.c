#include "stdio.h"
#include "time.h"

#define LEN 10

//数组打印
void arrDisplay(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        if(i % 5 == 0)
        {
            printf("\n");
        }
        printf("%-2d", arr[i]);
    }
    printf("\n");
}

//0的移动
void moveZeros(int arr[], int len)
{
    int i = 0;
    int count = 0;
    for(i = 0; i < len; ++i)
    {
        if(arr[i] != 0)
        {
            arr[count] = arr[i];
            ++count;
        }
    }
    while(count < len)
    {
        arr[count] = 0;
        ++count;
    }
}

int main()
{
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    int i = 0;
    for(i = 0; i < LEN; ++i)
    {
        //随机值范围[0, 4]
        arr[i] = 0 + rand() % (4 - 0 + 1);
    }
    printf("初始数组打印如下: \n");
    arrDisplay(arr, LEN);
    moveZeros(arr, LEN);
    printf("移动之后的数组为: \n");
    arrDisplay(arr, LEN);
    return 0;
}
