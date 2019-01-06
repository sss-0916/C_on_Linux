#include "stdio.h"

//两数之和
int add(int n1, int n2)
{
    int temp = 0;
    while(n2 != 0)
    {
        //两数的无进位和
        temp = n1 ^ n2;
        //两数的进位
        n2 = (n1 & n2) << 1;
        n1 = temp;
    }
    return n1;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("请输入两个整数: \n");
    scanf("%d %d", &num1, &num2);
    printf("%d + %d = %d\n",
        num1, num2, add(num1, num2));
    return 0;
}
