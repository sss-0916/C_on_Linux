/*
**	�ַ�������֮ȥ���ո�
**	���ֿ�����, temp��ret
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define LEN 100

/*---�ַ���������---*/
char* stringHandle(char* str)
{
	char* temp = str;
	char* ret = str;
	//����ǰ��Ŀո�
	while (*str == ' ')
	{
		++str;
	}
	//�������м����Ŀո�
	while (*str != '\0')
	{
		//��tempָ����ܵ��������ַ���
		*temp++ = (*str == '\t' || *str == '\n') ? ' ' : *str;
		if (*str != ' ')
		{
			++str;
		}
		else
		{
			//��������Ŀո�
			while (*str == ' ')
			{
				++str;
			}
		}
	}
	//�ַ�����β����'\0'
	if (temp > ret && *(temp - 1) == ' ')
	{
		*(temp - 1) = '\0';
	}
	else
	{
		*temp = '\0';
	}
	return ret;
}

int main()
{
	char str[LEN] = { 0 };
	char* p;
	printf("�������ַ���: \n");
	gets(str);
	p = stringHandle(str);
	printf("�������ַ�������: \n%s\n", p);
	system("pause");
	return 0;
}
