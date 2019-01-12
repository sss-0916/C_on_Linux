#include "stdio.h"

//计算1/1 - 1/2 + ... + 1/99 - 1/100
void calculate()
{
    int i = 0;
    double sum = 0;
    for(i = 1; i <= 100; ++i)
    {
        if(i % 2 == 0)
        {
            sum -= 1.0 / i;
        }
        else
        {
            sum += 1.0 / i;
        }
    }
    printf("1/1 - 1/2 + ... + 1/99 - 1/100 = %f\n", 
            sum);
}

int main()
{
    calculate();
    return 0;
}
