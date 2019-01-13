#include "stdio.h"

#define min(a, b) ((a < b) ? a : b)

//最大公约数
int greatestCommonDivisor(int n1, int n2)
{
    if(n1 <= 0 || n2 <= 0)
    {
        return -1;
    }
    int i = 0; 
    for(i = min(n1, n2); i > 0; --i)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            return i;
        }
    }
    return -1;
}

//最小公倍数
int leastCommonMultiple(int n1, int n2)
{
    if(n1 <= 0 || n2 <= 0)
    {
        return -1;
    }
    return n1 * n2 / greatestCommonDivisor(n1, n2);
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int gcd = 0;
    int lcm = 0;
    printf("请输入两个整数: \n");
    scanf("%d %d", &num1, &num2);
    gcd = greatestCommonDivisor(num1, num2);
    lcm = leastCommonMultiple(num1, num2);
    printf("最大公约数为: %d\n", gcd);
    printf("最小公倍数为: %d\n", lcm);
    return 0;
}
