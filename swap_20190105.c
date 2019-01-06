#include "stdio.h"

//交换两个变量的值
void swap(int* p1, int* p2)
{
    int temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("请输入两个整数的值: \n");
    scanf("%d %d", &num1, &num2);
    printf("交换前的两个整数的值为: %d %d\n",
            num1, num2);
    swap(&num1, &num2);
    printf("交换后的两个整数的值为: %d %d\n", 
            num1, num2);
    return 0;
}
