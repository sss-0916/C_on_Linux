/*
**	����������֮��̽�㷨
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number = 0;
	int sum = 0;
	int count = 0;
	int temp = 0;
	printf("����������: \n");
	scanf("%d", &number);
	for (int i = 1; i <= number / 2 + 1; ++i)
	{
		sum = 0;
		for (int j = i; j <= number / 2 + 1; ++j)
		{
			sum += j;
			temp = number - sum;
			/*---sum��ֵ����number��ֵ---*/
			if (temp < 0)
			{
				break;
			}
			/*---sum��ֵ����number��ֵ---*/
			if (temp == 0)
			{
				/*---����������ӡ---*/
				for (int k = i; k <= j; ++k)
				{
					printf("%-4d", k);
				}
				++count;
				printf("\n");
			}
		}
	}
	printf("��%d������������Ϊ%d!\n", count, number);
	system("pause");
	return 0;
}