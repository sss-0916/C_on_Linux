#include "stdio.h"

//菱形打印
void rhombusDisplay(int height)
{
    int i = 0;
    int j = 0;
    //打印上三角
    for(i = 1; i <= height / 2 + 1; ++i)
    {
        //打印每一行
        for(j = 1; j <= height / 2 + i; ++j)
        {
            if(j <= height / 2 - i + 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    //打印下三角
    for(i = height / 2; i > 0; --i)
    {
        //打印每一行
        for(j = 1; j <= height / 2 + i; ++j)
        {
            if(j <= height / 2 - i + 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main()
{
    int height = 0;
    printf("请输入要打印的菱形的高度: \n");
    scanf("%d", &height);
    rhombusDisplay(height);
    return 0;
}
