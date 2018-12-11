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

//冒泡排序
void bubbleSort(int arr[LEN])
{
	int bound = 0;
	int cur = 0;
	for(bound = 0; bound < LEN; ++bound)
	{
		for(cur = LEN - 1; cur > bound; --cur)
		{
			if(arr[cur] < arr[cur - 1])
			{
				swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
}

int main()
{
	int number_arr[LEN] = {1, 5, 9, 2, 4, 6, 
				7, 3, 8, 0};
	int i = 0;
	printf("The origin array is below: \n");
	for(i = 0; i < LEN; ++i)
	{
		printf("%-2d", number_arr[i]);
	}
	printf("\n");
	bubbleSort(number_arr);
	printf("The sorted array is below: \n");
	for(i = 0; i < LEN; ++i)
	{
		printf("%-2d", number_arr[i]);
	}
	printf("\n");
	return 0;
}
