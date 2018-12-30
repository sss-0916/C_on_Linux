#include "stdio.h"

//将一个非负数的每一位相加
//返回和
int addDigits(int n)
{
    if(n > 0)
    {
        return n % 10 + addDigits(n / 10);
    }
    return 0;
}

int main()
{
    int num = 0;
    printf("请输入非负整数num: \n");
    scanf("%d", &num);
    printf("结果为: %d\n", addDigits(num));
    return 0;
}
