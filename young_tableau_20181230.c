#include "stdio.h"

#define M 3
#define N 3

//二维数组打印函数
void arrDisplay(int arr[][N], int row, int col)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < row; ++i)
    {
        for(j = 0; j < col; ++j)
        {
            printf("%-5d", arr[i][j]);
        }
        printf("\n");
    }
}

//杨氏矩阵中目标值的查找
int findTarget(int arr[M][N], int target,
        int row, int col, int* r_row, int* r_col)
{
    //右上角开始查找
    int i = 0;
    int j = col - 1;
    while(i < row && j >= 0)
    {
        if(arr[i][j] == target)
        {
            *r_row = i;
            *r_col = j;
            return 1;
        }
        else if(arr[i][j] > target)
        {
            --j;
        }
        else
        {
            ++i;
        }
    }
    *r_row = -1;
    *r_col = -1;
    return 0;
}

int main()
{
    int arr[M][N] = {1, 2, 3,
        4, 5, 6, 7, 8, 9};
    int target = 0;
    int flag = 0;
    int row = 0;
    int col = 0;
    printf("二维数组打印如下: \n");
    arrDisplay(arr, M, N);
    printf("请输入要查找的目标值: \n");
    scanf("%d", &target);
    flag = findTarget(arr, target, M, N, &row, &col);
    if(flag == 1)
    {
        printf("目标值存在!\n坐标为: (%d, %d)\n",
                row, col);
    }
    else
    {
        printf("目标值不存在!\n");
    }
    return 0;
}
