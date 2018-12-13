#include "stdio.h"

#define LEN 20

//字符串长度
int strlength(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		++count;
		++str;
	}
	return count;
}

//字符串逆置
void reverseString(char* start, char* end)
{
	char temp = 0;
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		++start;
		--end;
	}
}

void reverse(char* str)
{
	char* start = str;
	char* end = str + strlength(str) - 1;
	char* cur = str;
	//整体逆置
	reverseString(start, end);
	//部分逆置
	while(*cur != '\0')
	{
		char* begin = cur;
		while(*cur != ' ' && *cur != '\0')
		{
			++cur;
		}
		reverseString(begin, cur - 1);
		while(*cur == ' ')
		{
			++cur;
		}
	}
}

int main()
{
	char arr[LEN] = "student a am i";
	printf("初始字符数组如下: %s\n", arr);
	reverse(arr);
	printf("调整后的字符数组如下: %s\n", arr);
	return 0;
}
