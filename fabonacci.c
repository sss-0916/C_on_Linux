#include "stdio.h"

//斐波那契数列递归法
/*
int fabonacci(int n)
{
	if(n < 1)
	{
		return -1;
	}
	if(n == 1 || n == 2)
	{	
		return 1;
	}
	return fabonacci(n - 1) + fabonacci(n - 2);
}
*/

//斐波那契数列非递归算法
int fabonacci(int n)
{
	if(n < 1)	
	{
		return -1;
	}
	if(n == 1 || n == 2)
	{
		return 1;
	}
	int i = 0;
	int n_1 = 1;
	int n_2 = 1;
	int n_n = 0;
	for(i = 3; i <= n; ++i)
	{
		n_n = n_1 + n_2;
		n_2 = n_1;
		n_1 = n_n;
	}
	return n_n;
}

int main()
{
	int n = 0;
	int i = 0;
	printf("请输入n: \n");
	scanf("%d", &n);
	for(i = 1; i <=  n; ++i)
	{
		printf("斐波那契数列的第%d项为: %d\n", 
			i, fabonacci(i));	
	}
	printf("\n");
}
