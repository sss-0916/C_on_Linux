#include <stdio.h>
#include <stdlib.h>

int countOneBit(int n)
{
    int ret = 0;
    int i = 0;

    for(i = 0; i < 32; ++i)
    {
        if(((n >> i) & 1) == 1)
        {
            ++ret;
        }
    }
    return ret;
}

int main()
{
    int cnt = 0;
    int num = 0;

    printf("请输入一个数: \n");
    scanf("%d", &num);
    cnt = countOneBit(num);
    printf("%d中有%d个1\n", 
            num, cnt);

    return 0;
}
