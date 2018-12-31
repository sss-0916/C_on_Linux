#include "stdio.h"

//每位相加直到结果为一位数
int addDigits(int n)
{
    return 1 + (n - 1) % 9;
}

int main()
{
    int num = 0;
    printf("请输入一个非负整数: \n");
    scanf("%d", &num);
    printf("结果为: %d\n", addDigits(num));
    return 0;
}
