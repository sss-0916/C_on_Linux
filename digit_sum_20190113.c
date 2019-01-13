#include "stdio.h"

//非负数的各位之和
int digitSum(int n)
{
    if(n < 0)
    {
        return -1;
    }
    else if(n <= 9)
    {
        return n % 10; 
    }
    return n % 10 + digitSum(n / 10);
}

int main()
{
    int num = 0;
    int result = 0;
    printf("请输入一个非负数: \n");
    scanf("%d", &num);
    result = digitSum(num);
    printf("%d的各位之和为%d\n", 
            num, result);
    return 0;
}
