#include "stdio.h"

//乘法口诀表打印
void mulTableDisplay()
{
    int row = 0;
    int col = 0;
    for(row = 1; row <= 9; ++row)
    {
        for(col = 1; col <= row; ++col)
        {
            printf("%d * %d = %2d ", col, row, col * row);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    printf("乘法口诀表打印如下: \n");
    mulTableDisplay();
    return 0;
}
