#include "stdio.h"

//2的幂判断
int isPowOfTwo(int n)
{
    if(n <= 0)
    {
        return 0;
    }
    if((n & (n - 1)) == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int num = 0;
    int flag = 0;
    printf("请输入一个数: \n");
    scanf("%d", &num);
    flag = isPowOfTwo(num);
    if(flag == 1)
    {
        printf("是2的幂!\n");
    }
    else
    {
        printf("不是2的幂!\n");
    }
    return 0;
}
