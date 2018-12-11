#include "stdio.h"
#include "math.h"

int integerReverse(int x)
{
    int arr[20] = {0};
    int i = 0;
    int j = 0;
    int ret = 0;
    for(i = 0; i < 20; ++i)
    {
        arr[i++] = x % 10;
        x /= 10;
    }
    while(arr[i]== 0)
    {
        --i;
    }
    int temp = 1;
    for(j = i; j <= i; --j)
    {
        ret += arr[j] * temp;
        temp *= 10;
    }
    return ret;
}

int main()
{
    int number = 0;
    int result = 0;
    printf("请输入整数: \n");
    scanf("%d", &number);
    result = integerReverse(number);
    printf("结果如下: %d\n", result);
    return 0;
}
