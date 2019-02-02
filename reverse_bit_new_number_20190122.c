#include <stdio.h>
#include <math.h>

unsigned int reverseBitNumber(unsigned int n)
{
    int i = 0;
    unsigned int ret = 0;

    for(i = 0; i < 32; ++i)
    {
        ret += ((n >> i) & 1) * 
            (unsigned int)pow(2, 32 - i - 1);
    }
    return ret;
}

int main()
{
    unsigned int origin_number = 0;
    unsigned int reverse_bit_number = 0;

    printf("请输入一个整数: \n");
    scanf("%u", &origin_number);
    reverse_bit_number =
        reverseBitNumber(origin_number);
    printf("%u二进制位反转后的新值为%u\n", 
            origin_number, reverse_bit_number);

    return 0;
}
