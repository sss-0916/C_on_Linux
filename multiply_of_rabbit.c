/*
**	兔子繁衍问题之何时兔子满1000只
**	兔子寿命为1年
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

/*---斐波那契数列第n项---*/
int fabonacci(int n)
{
	if (n < 1)
	{
		return -1;
	}
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return fabonacci(n - 1) + fabonacci(n - 2);
}

int main()
{
	int rabbit[LEN] = { 0 };
	//兔子总数
	int sum = 0;
	//月份统计
	int count = 0;
	int month = 0;
	for (month = 1; month < LEN; ++month)
	{
		rabbit[month] = fabonacci(month);
		sum += rabbit[month];
		++count;
		if (count > 12)
		{
			sum -= rabbit[month - 12];
			--count;
		}
		if (sum > 1000)
		{
			break;
		}
	}
	printf("%d月后兔子数量超过1000只, 具体数量为: %d!\n", 
			month, sum);
	system("pause");
	return 0;
}