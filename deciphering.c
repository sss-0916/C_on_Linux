/*
**	��������
**	���ܹ�������
**	һ����λ����
**	ÿλ���ֶ��ü�����, ����10���������������
**	�ٽ�����ĵ�һλ�͵���λ����
**	�ڶ�λ�͵���λ����
**	��д�������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 4

/*---�����ƽ�---*/
void passwordCrack(int password)
{
	int i = LEN - 1;
	int password_arr[LEN] = { 0 };
	/*---�������ÿһλ��������---*/
	while ((password != 0) && (i >= 0))
	{
		password_arr[i--] = password % 10;
		password /= 10;
	}
	/*---����һ�͵��Ľ���, �ڶ��͵�������---*/
	for (int i = 0; i < LEN / 2; ++i)
	{
		int temp = 0;
		temp = password_arr[i];
		password_arr[i] = password_arr[LEN - i - 1];
		password_arr[LEN - i - 1] = temp;
	}
	/*---��ÿλ���л�ԭ---*/
	for (int i = 0; i < LEN; ++i)
	{
		if (password_arr[i] >= 5)
		{
			password_arr[i] -= 5;
		}
		else if (password_arr[i] < 5)
		{
			password_arr[i] += 5;
		}
	}
	/*---����ǰ�Ľ����ӡ---*/
	printf("����ǰ����������Ϊ: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%d", password_arr[i]);
	}
	printf("\n");
}

int main()
{
	int password = 0;
	printf("�������Ѽ��ܵ���λ����: \n");
	scanf("%d", &password);
	passwordCrack(password);
	system("pause");
	return 0;
}