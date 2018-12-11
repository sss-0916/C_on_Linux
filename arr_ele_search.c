#include "stdio.h"

#define LEN 4

int main()
{
	int arr[LEN][LEN] = {{1, 2, 3, 0}, 
	{2, 3, 4, 5}, {3, 4, 5, 6}, {4, 5, 6, 6}};
	int row = 0;
	int col = 0;
	int temp_col = 0;	
	int row_max = 0;
	int result = 0;
	int i = 0; 
	int j = 0;
	//初始数组的打印
	printf("数组打印如下: \n");
	for(i = 0; i < LEN; ++i)
	{
		for(j = 0; j < LEN; ++j)
		{
			printf("%-2d", arr[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < LEN; ++i)
	{
		row_max = arr[i][0];
		temp_col = 0;
		for(j = 0; j < LEN; ++j)
		{
			if(row_max < arr[i][j])
			{
				row_max = arr[i][j];
				temp_col = j;
			}
		}
		if(i == 0)
		{
			row = i;
			col = temp_col;
			result = row_max;
		}
		else if(result > row_max)
		{
			row = i;
			col = temp_col;
			result = row_max;
		}
	}
	printf("结果为: %d, 坐标为: (%d, %d)\n",
			result, row, col);
	return 0;
}













