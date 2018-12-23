#include "stdio.h"

#define LEN 10

//数组打印
void arrDisplay(int arr[])
{
    int i = 0;
    for(i = 0; i < LEN; ++i)
    {
        printf("%-2d", arr[i]);
    }
    printf("\n");
}

//众数-暴力解法
int majorityElement(int arr[])
{
    int i = 0;
    int j = 0;
    for(i = 0; i < LEN; ++i)
    {
        int value = arr[i];
        int count = 0;
        for(j = 0; j < LEN; ++j)
        {
            if(arr[j] == value)
            {
                ++count;
            }
        }
        if(count > LEN / 2)
        {
            return value;
        }
    }
    return -0;
}

int main()
{
    //设置随机种子
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    int i = 0;
    int majority_number = 0;
    //数组元素的初始化
    for(i = 0; i < LEN; ++i)
    {
        //随机值范围[1, 3]
        arr[i]= 1 + rand() % (3 - 1 + 1);
    }
    printf("数组打印如下: \n");
    arrDisplay(arr);
    majority_number = majorityElement(arr); 
    printf("众数为: %-2d\n", majority_number);
    return 0;
}
