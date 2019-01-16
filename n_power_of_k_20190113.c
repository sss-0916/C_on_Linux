#include "stdio.h"

//n的k次方
int nPowerOfK(int n, int k)
{
    if(n <= 0)
    {
        return -1;
    }
    if(k <= 0)
    {
        return -1;
    }
    else if(k == 1)
    {
        return n;
    }
    return n * nPowerOfK(n, k - 1);
}

int main()
{
    int n = 0;
    int k = 0;
    int n_power_of_k = 0;
    printf("请输入n和k: \n");
    scanf("%d %d", &n, &k);
    n_power_of_k = nPowerOfK(n, k);
    printf("%d的%d次方为: %d\n", 
            n, k, n_power_of_k);
    return 0;
}
