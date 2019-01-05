#include "stdio.h"

#define LEN 100

int main()
{
    int arr[LEN] = {6, 2, 5, 7, 3, 
        4, 6, 2, 5, 1, 4, 3};
    int temp = 1;
    int posi = 0;
    int num1 = 1;
    int num2 = 1;
    int len = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    //连续异或
    for(i = 0; i < len; ++i)
    {
        temp ^= arr[i];
    }
    //找到异或结果中的某个1的位置
    for(i = 0; i < 32; ++i)
    {
        if((temp << i) & 1 == 1)
        {
            posi = i;
            break;
        }
    }
    //根据这个1的位置将数组分成两组
    for(i = 0; i < len; ++i)
    {
        //分别对每一组连续异或
        if(((arr[i] >> posi) & 1) == 1)
        {
            num1 ^= arr[i];
        }
        else
        {
            num2 ^= arr[i];
        }
    }
    printf("结果为: %d, %d \n", num1, num2);
    return 0;
}
