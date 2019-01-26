#include <stdio.h>

int averageNumber(int a, int b)
{
    return (a & b) + ((a ^ b) >> 1);
}

int main()
{
    int a = 10;
    int b = 20;
    int avg = 0;

    avg = averageNumber(a, b);
    printf("%d和%d的平均数为: %d\n", 
            a, b, avg);

    return 0;
}
