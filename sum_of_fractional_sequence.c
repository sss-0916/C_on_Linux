/*
**	����a��ÿһ��Ϊ��Ӧ��
**	쳲��������е���һλ�ͺ�һλ����
**	������a��ǰn���(n > 1)
**	�����������ʽ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---쳲��������е�n��---*/
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

/*---���Լ��---*/
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

/*---�������---*/
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
	//����
	int numerator = 1;
	//��ĸ
	int denominator = 1;
	//��ʱ����
	int temp_numerator = 0;
	//��ʱ��ĸ
	int temp_denominator = 0;
	printf("����������n: \n");
	scanf("%d", &n);
	for (int i = 2; i <= n; ++i)
	{
		temp_numerator = fabonacci(i);
		temp_denominator = fabonacci(i + 1);
		fractionAdd(numerator, denominator,
			temp_numerator, temp_denominator,
			&numerator, &denominator);
	}
	//�����ӡ
	printf("sum(%d) = %d + %d / %d \n",
		n, numerator / denominator, 
		numerator % denominator, denominator);
	system("pause");
	return 0;
}