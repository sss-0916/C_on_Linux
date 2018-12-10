#include "stdio.h"

#define LEN 9

int main()
{
	int arr[LEN] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
	int result = arr[0];
	int i = 0;
	printf("该数组中的元素打印如下: \n");
	for(i = 0; i < LEN; ++i)
	{
		printf("%-2d", arr[i]);
	}
	printf("\n");
	for(i = 1; i < LEN; ++i)
	{
		result = result ^ arr[i];
	}
	printf("该数组中的独一无二的数是%d\n", result);
	return 0;
}
