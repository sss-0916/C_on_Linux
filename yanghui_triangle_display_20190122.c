#include <stdio.h>

#define LEN 10

int main()
{
    int arr[LEN][LEN];
    int i = 0;
    int j = 0;

    for(i = 0; i < LEN; ++i)
    {
        for(j = 0; j <= i; ++j)
        {
            arr[i][j] = 1;
        }
    }
    for(i = 2; i < LEN; ++i)
    {
        for(j = 1; j < i; ++j)
        {
            arr[i][j] = arr[i - 1][j - 1] +
                arr[i - 1][j];
        }
    }
    printf("杨辉三角打印如下: \n");
    for(i = 0; i < LEN; ++i)
    {
        for(j = 0; j <= i; ++j)
        {
            printf("%-5d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
