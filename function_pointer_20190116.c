#include "stdio.h"

//加
int add(int num1, int num2)
{
    return num2 + num1;
}

//减
int sub(int num1, int num2)
{
    return num2 - num1;
}

//乘
int mul(int num1, int num2)
{
    return num1 * num2;
}

//除
int div(int num1, int num2)
{
    return num2 / num1;
}

typedef int (*CAL)(int, int);

//计算
void calculate(int num1, int num2, int flag)
{
    CAL cal;
    if(flag == 1)
    {
        cal = add;
        printf("%-2d + %-2d = %-2d\n", 
                num2, num1, cal(num1, num2));
    }
    if(flag == 2)
    {
        cal = sub;
        printf("%-2d - %-2d = %-2d\n",
                num2, num1, cal(num1, num2));
    }
    if(flag == 3)
    {
        cal = mul;
        printf("%-2d * %-2d = %-2d\n",
                num2, num1, cal(num1, num2));
    }
    if(flag == 4) 
    {
        cal = div;
        printf("%-2d / %-2d = %-2d\n", 
                num2, num1, cal(num1, num2));
    }
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    int flag = 0;
    printf("请选择计算方式: \n");
    printf("****1. 加法*****\n");
    printf("****2. 减法*****\n");
    printf("****3. 乘法*****\n");
    printf("****4. 除法*****\n");
    scanf("%d", &flag);
    calculate(num1, num2, flag);
    return 0;
}
