#include <stdio.h>

void everyBitDisplay1(int n)
{
    if(n > 9)
    {
        everyBitDisplay1(n / 10);
    }
    printf("%-2d", n % 10);
}

void everyBitDisplay2(int n)
{
    while(n > 0)
    {
        printf("%-2d", n % 10);
        n /= 10;
    }
    printf("\n");
}

int main()
{
    int num = 0;

    printf("请输入一个整数: \n");
    scanf("%d", &num);
    everyBitDisplay1(num);
    printf("\n");
    everyBitDisplay2(num);

    return 0;
}
