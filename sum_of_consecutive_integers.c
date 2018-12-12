/*
**	连续整数和之试探算法
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number = 0;
	int sum = 0;
	int count = 0;
	int temp = 0;
	printf("请输入整数: \n");
	scanf("%d", &number);
	for (int i = 1; i <= number / 2 + 1; ++i)
	{
		sum = 0;
		for (int j = i; j <= number / 2 + 1; ++j)
		{
			sum += j;
			temp = number - sum;
			/*---sum的值大于number的值---*/
			if (temp < 0)
			{
				break;
			}
			/*---sum的值等于number的值---*/
			if (temp == 0)
			{
				/*---连续整数打印---*/
				for (int k = i; k <= j; ++k)
				{
					printf("%-4d", k);
				}
				++count;
				printf("\n");
			}
		}
	}
	printf("有%d组连续整数和为%d!\n", count, number);
	system("pause");
	return 0;
}