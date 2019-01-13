#include "stdio.h"

//交换两个变量的值, 不引入临时变量
void swap(int* p1, int* p2)
{
    *p1 = *p1 ^ *p2;
    *p2 = *p1 ^ *p2;
    *p1 = *p1 ^ *p2;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("请输入两个变量的值: \n");
    scanf("%d %d", &num1, &num2);
    printf("交换前两个变量的值为: %d %d\n",
            num1, num2);
    swap(&num1, &num2);
    printf("交换后两个变量的值: %d %d\n",
            num1, num2);
    return 0;
}
