#include <stdio.h>

int factorial(int n)
{
    if(n < 0)
    {
        return -1;
    }
    if(n == 0 || n == 1)
    {
        return 1;
    }
    int ret = 1;
    while(n > 0)
    {
        ret *= n; 
        --n;
    }
    return ret;
}

//int factorial(int n)
//{
//    if(n < 0)
//    {
//        return -1;
//    }
//    if(n == 0)
//    {
//        return 1;
//    }
//    return factorial(n - 1) * n;
//}

int main()
{
    int n = 0;
    int factorial_n = 0;

    printf("请输入n: \n");
    scanf("%d", &n);
    factorial_n = factorial(n);
    printf("%d! = %d\n", n, factorial_n);

    return 0;
}
