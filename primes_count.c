#include "stdio.h"

//质数判断
int isPrime(int n)
{
    int i = 0;
    for(i = 2; i < n; ++i)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

//小于n的质数的个数统计
int primesCount(int n)
{
    int i = 0;
    int count = 0;
    int flag = 0;
    for(i = 2; i < n; ++i)
    {
        flag = 0;
        flag = isPrime(i);
        if(flag == 1)
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    int num = 0; 
    int count = 0;
    printf("请输入一个非负整数: \n");
    scanf("%d", &num);
    count = primesCount(num);
    printf("小于%d的质数有%d个!\n", num, count);
    return 0;
}
