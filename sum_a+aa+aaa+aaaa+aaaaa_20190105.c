#include "stdio.h"

//求前五项和
int sum(int a)
{
    int sum = 0;
    int temp = a;
    int i = 0;
    for(i = 0; i < 5; ++i)
    {
        sum += temp;
        temp = temp * 10 + a;
    }
    return sum;
}

int main()
{
    int result = 0;
    int a = 0;
    printf("请输入a的值(0 ~ 9): \n");
    scanf("%d", &a);
    result = sum(a);
    printf("Sn = a + aa + aaa + aaaa + aaaaa = %d\n",
            result);
    return 0;
}
