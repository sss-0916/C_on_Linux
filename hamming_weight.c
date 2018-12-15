#include "stdio.h"
#include "stdint.h"

int hammingWeight(uint32_t n)
{
    int count = 0;
    int i = 0;
    for(i = 0; i < 32; ++i)
    {
        if((n >> i) & 1 == 1)
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    uint32_t num = 0;
    int hamming_weight = 0;
    printf("请输入整数: \n");
    scanf("%d", &num);
    hamming_weight = hammingWeight(num);
    printf("%d的汉明重量为: %d\n", num, hamming_weight);
    return 0;
}
