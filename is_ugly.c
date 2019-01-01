#include "stdio.h"

//丑数的判断
int isUgly(int n)
{
    if(n <= 0)
    {
        return 0;
    }
    while(n % 2 == 0)
    {
        n /= 2;
    }
    while(n % 3 == 0)
    {
        n /= 3;
    }
    while(n % 5 == 0)
    {
        n /= 5;
    }
    return n == 1;
}

int main()
{
    int num = 0;
    int flag = 0;
    printf("请输入一个数: \n");
    scanf("%d", &num);
    flag = isUgly(num);
    if(flag == 1)
    {
        printf("是丑数!\n");
    }
    else
    {
        printf("不是丑数!\n");
    }
    return 0;
}
