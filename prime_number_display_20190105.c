#include "stdio.h"

//素数判断0不是, 1是
int isPrimeNumber(int num)
{
    int i = 0;
    for(i = 2; i <= num / 2; ++i)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

//100~200素数打印
void primeNumberDisplay()
{
    int i = 0;
    int flag = 0;
    int count = 0;
    for(i = 100; i <= 200; ++i)
    {
        flag = isPrimeNumber(i);
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
    printf("100~200之间的素数打印如下: ");
    primeNumberDisplay();
    return 0;
}
