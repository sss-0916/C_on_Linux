#include "stdio.h"

int isPerfectSquare(int n)
{
    if(n < 0)
    {
        return 0;
    }
    if(n == 0 || n == 1)
    {
        return 1;
    }
    int i = 1;
    int j = n / 2;
    while(i <= j)
    {
        if(i * i == n)
        {
            return 1;
        }
        else
        {
            ++i;
        }
    }
    return 0;
}

int main()
{
    int num = 0;
    int flag = 0;
    printf("请输入一个数: \n");
    scanf("%d", &num);
    flag = isPerfectSquare(num);
    if(flag == 1)
    {
        printf("是完全平方数!\n");
    }
    else
    {
        printf("不是完全平方数!\n");
    }
    return 0;
}
