#include <stdio.h>

void evenOddBitDisplay(int n)
{
    int i = 0;

    printf("奇数位打印如下: \n");
    for(i = 0; i < 32; i += 2)
    {
        printf("%-2d", (n >> i) & 1);
    }
    printf("\n偶数位打印如下: \n");
    for(i = 1; i < 32; i += 2)
    {
        printf("%-2d", (n >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int num = 0;

    printf("请输入一个整数: \n");
    scanf("%d", &num);
    evenOddBitDisplay(num);

    return 0;
}
