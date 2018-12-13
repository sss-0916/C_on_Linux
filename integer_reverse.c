/*
**	整数反转
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

/*---整数反转函数---*/
int integerReverse(int x)
{
	int ret = 0;
	while (x != 0)
	{
		int pop = x % 10;
		if (ret > INT_MAX / 10 || (ret == INT_MAX / 10 && pop > 7))
		{
			return 0;
		}
		if (ret < INT_MIN / 10 || (ret == INT_MIN / 10 && pop < -8))
		{
			return 0;
		}
		ret = ret * 10 + pop;
		x /= 10;
	}
	return ret;
}

int main()
{
	int result = 0;
	int number = 0;
	printf("请输入整数: \n");
	scanf("%d", &number);
	result = integerReverse(number);
	printf("结果如下: %d\n", result);
	system("pause");
	return 0;
}