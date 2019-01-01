#include "stdio.h"

//每一位相加
int addDigits(int n)
{
    if(n > 0)
    {
        return n % 10 + addDigits(n / 10);
    }
    return 0;
}

//判断每位和是否为一位数
int isUnit(int n)
{
    while(n > 9)
    {
        n = addDigits(n);
    }
    return n;
}

int main()
{
    int num = 0;
    printf("请输入一个非负整数: \n");
    scanf("%d", &num);
    printf("结果为%d\n", isUnit(num));
    return 0;
}
