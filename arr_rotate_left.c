#include "stdio.h"

#define LEN 6

//数组打印
void arrDisplay(int arr[])
{
	int i = 0;
	for(i = 0; i < LEN; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
}

//循环左移一位
void rotateLeft(int arr[])
{
	int temp = 0;
	int i = 0;
	temp = arr[0];
	for(i = 0; i < LEN - 1; ++i)
	{
		arr[i] = arr[i + 1];
	}
	arr[LEN - 1] = temp;
}

int main()
{
	int arr[LEN] = {1, 2, 3, 4, 5, 10};
	int n = 0;
	int i = 0;
	printf("请输入循环左移的位数: \n");
	scanf("%d", &n);
	//循环左移前的数组打印
	printf("循环左移之前的数组为: \n");
	arrDisplay(arr);
	//数组循环左移n位
	for(i = 0; i < n; ++i)
	{
		rotateLeft(arr);	
	}	
	//循环左移n位之后的结果打印
	printf("循环左移%d位后的数组为: \n", n);
	arrDisplay(arr);
	return 0;
}










