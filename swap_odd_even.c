#include "stdio.h"
#include "time.h"

#define LEN 100

//交换
void swap(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//奇数在前, 偶数在后
void swapOddEven(int arr[])
{
	int* left = arr;
	int* right = arr + LEN -1;
	while(left < right)
	{
		while(*left % 2 != 0)
		{
			++left;
		}
		while(*right % 2 != 1)
		{
			--right;
		}
		if(left < right)
		{
			swap(left, right);
		}
	}
}

int main()
{
	//随机种子
	srand((unsigned int)time(0));
	int arr[LEN] = {0};
	int i = 0;
	//数组初始化
	for(i = 0; i < LEN; ++i)
	{
		//产生0~99的随机数
		arr[i] = 0 + rand() % (99 - 0 + 1);
	}
	printf("初始数组打印如下: \n");
	for(i = 0; i < LEN; ++i)
	{
		printf("%-3d", arr[i]);
		if((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	swapOddEven(arr);
	printf("调整后的数组打印如下: \n");
	for(i = 0; i < LEN; ++i)
	{
		printf("%-3d", arr[i]);
		if((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}
