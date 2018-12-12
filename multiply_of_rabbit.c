/*
**	���ӷ�������֮��ʱ������1000ֻ
**	��������Ϊ1��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

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
	return fabonacci(n - 1) + fabonacci(n - 2);
}

int main()
{
	int rabbit[LEN] = { 0 };
	//��������
	int sum = 0;
	//�·�ͳ��
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
	printf("%d�º�������������1000ֻ, ��������Ϊ: %d!\n", 
			month, sum);
	system("pause");
	return 0;
}