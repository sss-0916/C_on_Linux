#include "stdio.h"

//int fibonacciNumber(int num)
//{
//    if(num <= 0)
//    {
//        return -1;
//    }
//    else if(num <= 2)
//    {
//        return 1;
//    }
//    return fibonacciNumber(num - 1) +
//           fibonacciNumber(num - 2);
//}
//

int fibonacciNumber(int num)
{
    if(num <= 0)
    {
        return -1;
    }
    else if(num <= 2)
    {
        return 1;
    }
    int n_1 = 1;
    int n_2 = 1;
    int n_n = 0;
    int i = 0;
    for(i = 3; i <= num; ++i)
    {
        n_n = n_1 + n_2;
        n_2 = n_1;
        n_1 = n_n;
    }
    return n_n;
}

void fibonacciNumberDisplay(int num)
{
    int i = 0;
    for(i = 1; i <= num; ++i)
    {
        printf("斐波那契数列的第%d项为: %d\n", 
                i, fibonacciNumber(i));
    }
}

int main()
{
    fibonacciNumberDisplay(8);
    return 0;
}
