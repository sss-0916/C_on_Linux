#include "stdio.h"

//和苏打水
int sodaDrink(int money)
{
    int total = 0;
    int empty = 0;
    // 单价1元
    total = money / 1;
    empty = money / 1;
    while(empty > 1)
    {
        total += empty / 2;
        empty = empty / 2 + empty % 2;
    }
    return total;
}

int main()
{
    int money = 0;
    int total = 0;
    printf("请输入资金: \n");
    scanf("%d", &money);
    total = sodaDrink(money);
    printf("%d元钱共可以喝%d瓶苏打水!\n",
            money, total);
    return 0;
}
