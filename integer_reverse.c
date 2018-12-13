/*
**	������ת
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

/*---������ת����---*/
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
	printf("����������: \n");
	scanf("%d", &number);
	result = integerReverse(number);
	printf("�������: %d\n", result);
	system("pause");
	return 0;
}