/*
**	数列a的每一项为对应的
**	斐波那契数列的那一位和后一位的商
**	求数列a的前n项和(n > 1)
**	输出带分数形式
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

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
	int n_1 = 1;
	int n_2 = 1;
	int n_n = 0;
	for (int i = 3; i <= n; ++i)
	{
		n_n = n_1 + n_2;
		n_2 = n_1;
		n_1 = n_n;
	}
	return n_n;
}

/*---最大公约数---*/
int gcd(int x, int y)
{
	for (int i = min(x, y); i > 0; --i)
	{
		if (x % i == 0 && y % i == 0)
		{
			return i;
		}
	}
	return 1;
}

/*---分数相加---*/
void fractionAdd(int numerator, int denominator,
	int temp_numerator, int temp_denominator,
	int* p_numerator, int* p_denominator)
{
	int y = temp_denominator * denominator;
	int x = denominator * temp_numerator +
			numerator * temp_denominator;
	int temp_gcd = gcd(x, y);
	*p_numerator = x / temp_gcd;
	*p_denominator = y / temp_gcd;
}

int main()
{
	int n = 0;
	//分子
	int numerator = 1;
	//分母
	int denominator = 1;
	//临时分子
	int temp_numerator = 0;
	//临时分母
	int temp_denominator = 0;
	printf("请输入整数n: \n");
	scanf("%d", &n);
	for (int i = 2; i <= n; ++i)
	{
		temp_numerator = fabonacci(i);
		temp_denominator = fabonacci(i + 1);
		fractionAdd(numerator, denominator,
			temp_numerator, temp_denominator,
			&numerator, &denominator);
	}
	//结果打印
	printf("sum(%d) = %d + %d / %d \n",
		n, numerator / denominator, 
		numerator % denominator, denominator);
	system("pause");
	return 0;
}