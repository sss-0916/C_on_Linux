#include <stdio.h>

void everyBitOfIntegerDisplay(int n)
{
    if(n > 9)
    {
        everyBitOfIntegerDisplay(n / 10);
    }
    printf("%-2d", n % 10);
}

int main()
{
    int num = 0;

    printf("请输入一个整数: \n");
    scanf("%d", &num);
    everyBitOfIntegerDisplay(num);
    printf("\n");

    return 0;
}
