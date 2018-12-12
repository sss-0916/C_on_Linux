//从键盘上输入n个整数
//计算并输出其中出现
//次数最多且数值最大的元素及其出现次数

#include "stdio.h"

#define LEN 100

int main()
{
	int arr[LEN] = {0};
	int i = 0;
	int j = 0;
	int n = 0;
	int index = 0;
	int no_1 = 0;
	int no_2 = 0;
	printf("请输入n的值: \n");
	scanf("%d", &n);
	printf("请输入%d个整数: \n", n);
	for(i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	//设出现次数最多的整数是a[0], 且出现1次
	index = 0;
	no_2 = 1;
	for(i = 0; i < n; ++i)
	{
		for (no_1 = 1, j = i + 1; j < n; ++j)
		{
			if (arr[j] == arr[i])
			{
				++no_1;
			}
		}
		//记录当前最优值, index记录出现
		//次数最多的整数的序号, no_2记录其次数
		if (no_1 >= no_2 && arr[i] > arr[index])
		{
			no_2 = no_1;
			index = i;
		}
	}
	printf("出现次数最多, 且数值最大的数是: %d, "
		"出现%d次!\n", arr[index], no_2);
}
