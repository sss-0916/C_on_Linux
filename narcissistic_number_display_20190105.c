#include "stdio.h"

//水仙花数的判断
int isNarcissisticNumber(int n)
{
    int sum = 0;
    int temp = n;
    while(temp > 0)
    {
        sum += (temp % 10) * (temp % 10) * (temp % 10);
        temp /= 10;
    }
    if(sum == n)
    {
        return 1;
    }
    return 0;
}

//水仙花数的打印
void narcissisticNumberDisplay()
{
    int i = 0;
    int flag = 0;
    int count = 0;
    for(i = 100; i <= 999; ++i)
    {
        flag = isNarcissisticNumber(i);
        if(flag == 1)
        {
            if(count % 10 == 0)
            {
                printf("\n");
            }
            ++count;
            printf("%-5d", i);
        }
    }
    printf("\n");
}

int main()
{
    printf("100~999中的水仙花数打印如下: ");
    narcissisticNumberDisplay();
    return 0;
}
