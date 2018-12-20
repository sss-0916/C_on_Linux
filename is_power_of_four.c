#include "stdio.h"

//判断是否是4的幂次方函数
int isPowerOfFour(int n)
{
    if(n == 1)
    {
        return 0;
    }
    while(n > 1)
    {
        if(n % 4 != 0)
        {
            break;
        }
        n /= 4;
    }
    return n == 1;
}

int main()
{
    int num = 0;
    int flag = 0;
    printf("请输入一个非负整数: \n");
    scanf("%d", &num);
    if(num <= 0)
    {
        printf("输入有误!\n");
        return 0;
    }
    flag = isPowerOfFour(num);
    if(flag == 1)
    {
        printf("%d是4的幂次方!\n", num);
    }
    else
    {
        printf("%d不是4的幂次方!\n", num);
    }
    return 0;
}
