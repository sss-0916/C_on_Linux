#include "stdio.h"

#define LEN 100

int isHappyNumber(int n)
{
    int temp = 0;
    while(n != 1)
    {
        while(n > 0)
        {
            temp += (n % 10) * (n % 10);
            n /= 10;
        }
        n = temp;
        temp = 0;
        if(n == 4)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num = 0;
    int flag = 0;
    printf("请输入一个数:\n");
    scanf("%d", &num);
    flag = isHappyNumber(num);
    if(flag == 1)
    {
        printf("%d是快乐数!\n", num);
    }
    else
    {
        printf("%d不是快乐数!\n", num);
    }
    return 0;
}
