#include "stdio.h"

#define N 32

//递归法
void decimalToBinary(int n)
{
	unsigned int temp = (unsigned int)n;
	if(temp / 2 != 0)
	{
		decimalToBinary(temp / 2);
	}
	printf("%-2d", temp % 2);
}

//非递归法
/*
void decimalToBinary(int n)
{
	int i = 0;
	int arr[N] = {0};
	for(i = 0; i < N; ++i)
	{
		arr[i] = (n >> i) & 1;
	}
	//结果打印
	for(i = N - 1; i >= 0; --i)
	{
		printf("%-2d", arr[i]);
	}
}
*/

int main()
{
	int number = 0;
	printf("请输入十进制整数: \n");
	scanf("%d", &number);
	decimalToBinary(number);
	printf("\n");
	return 0;
}
