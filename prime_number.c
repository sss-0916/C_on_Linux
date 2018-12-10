#include "stdio.h"

#define N 100

int main()
{
	int arr[N] = {0};
	int i = 0;
	int j = 0;
	//数组初始化	
	//2~100
	for(i = 1; i < N; ++i)
	{
		arr[i] = i + 1;
	}
	//筛选非素数
	for(i = 1; i < N; ++i)
	{
		if(arr[i] == 0)
		{
			continue;
		}
		for(j = i + 1; j < N; ++j)
		{
			if(arr[j] % arr[i] == 0)
			{
				arr[j] = 0;
			}
		}
	}
	//结果打印
	for(i = 1, j = 0; i < N; ++i)
	{
		if(arr[i] != 0)
		{
			++j;
			printf("%-4d", arr[i]);
			if(j % 5 == 0)
			{
				printf("\n");
			}

		}
	}
	return 0;
}
