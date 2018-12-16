/*
**	字符串处理之去掉空格
**	部分看不懂, temp和ret
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define LEN 100

/*---字符串处理函数---*/
char* stringHandle(char* str)
{
	char* temp = str;
	char* ret = str;
	//跳过前面的空格
	while (*str == ' ')
	{
		++str;
	}
	//处理单词中间多余的空格
	while (*str != '\0')
	{
		//用temp指针接受调整过的字符串
		*temp++ = (*str == '\t' || *str == '\n') ? ' ' : *str;
		if (*str != ' ')
		{
			++str;
		}
		else
		{
			//跳过多余的空格
			while (*str == ' ')
			{
				++str;
			}
		}
	}
	//字符串结尾加上'\0'
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
	printf("请输入字符串: \n");
	gets(str);
	p = stringHandle(str);
	printf("处理后的字符串如下: \n%s\n", p);
	system("pause");
	return 0;
}
