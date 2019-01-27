#include <stdio.h>
#include <stdint.h>

int differentBit(uint32_t n1, uint32_t n2)
{
    int ret = 0;
    int i = 0;

    for(i = 0; i < 32; ++i)
    {
        if(((n1 >> i) & 1) != ((n2 >> i) & 1))
        {
            ++ret;
        }
    }

    return ret;
}

int main()
{
    uint32_t num1 = 0;
    uint32_t num2 = 0;
    int different_bit = 0;

    printf("请输入两个整数: \n");
    scanf("%d %d", &num1, &num2);
    different_bit = differentBit(num1, num2);
    printf("%d和%d中有%d个位不同!\n", 
            num1, num2, different_bit);

    return 0;
}
