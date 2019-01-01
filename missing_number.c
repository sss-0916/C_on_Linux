#include "stdio.h"

#define LEN 9

//缺失数字的查找
int missingNumber(int arr[], int len)
{
    int sum_1 = (1 + len) * len / 2;
    int i = 0;
    int sum_2 = 0;
    for(i = 0; i < len; ++i)
    {
        sum_2 += arr[i];
    }
    return sum_1 - sum_2;
}

int main()
{
    int arr[LEN] = {0, 9, 8, 3, 7, 4, 2, 1, 6};
    int i = 0;
    int missing_number = 0;
    printf("数组打印如下: \n");
    for(i = 0; i < LEN; ++i)
    {
        printf("%-2d", arr[i]);
    } 
    missing_number = missingNumber(arr, LEN);
    printf("\n缺失的数字为: %d\n", missing_number);
    return 0;
}
