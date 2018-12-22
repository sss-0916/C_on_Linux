#include "stdio.h"

//判断是否是3的幂
int isPowerOfThree(int n)
{
    while(n > 1)
    {
        if(n % 3 != 0)
        {
            break;
        }
        n /= 3;
    }
    return n == 1;
}

int main()
{
    int num = 0;
    int flag = 0;
    printf("请输入非负整数: \n");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("输入错误!\n");
        return 0;
    }
    flag = isPowerOfThree(num);
    if(flag == 1)
    {
        printf("%d是3的幂!\n", num);
    }
    else
    {
        printf("%d不是3的幂!\n", num);
    }
    return 0;
}
