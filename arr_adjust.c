//调整数组, 奇数在前, 偶数在后
#include "stdio.h"

#define LEN 10

//交换
void swap(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int arr[LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i = 0;
	int* left = arr;
	int* right = arr + LEN - 1;
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
	//数组打印
	printf("调整后的数组打印如下: \n");
	for(i = 0; i < LEN; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
}
