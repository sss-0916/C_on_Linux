/*
**	密码问题
**	加密规则如下
**	一共四位数字
**	每位数字都用加上五, 除以10的余数代替该数字
**	再将密码的第一位和第四位互换
**	第二位和第三位互换
**	编写解码程序
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 4

/*---密码破解---*/
void passwordCrack(int password)
{
	int i = LEN - 1;
	int password_arr[LEN] = { 0 };
	/*---将密码的每一位存入数组---*/
	while ((password != 0) && (i >= 0))
	{
		password_arr[i--] = password % 10;
		password /= 10;
	}
	/*---将第一和第四交换, 第二和第三交换---*/
	for (int i = 0; i < LEN / 2; ++i)
	{
		int temp = 0;
		temp = password_arr[i];
		password_arr[i] = password_arr[LEN - i - 1];
		password_arr[LEN - i - 1] = temp;
	}
	/*---对每位进行还原---*/
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
	/*---加密前的结果打印---*/
	printf("加密前的数字序列为: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%d", password_arr[i]);
	}
	printf("\n");
}

int main()
{
	int password = 0;
	printf("请输入已加密的四位密码: \n");
	scanf("%d", &password);
	passwordCrack(password);
	system("pause");
	return 0;
}