#include "stdio.h"

#define LEN 20

//第一个唯一字符索引
int firstUniqueChar(char* str)
{
    int value = 0;
    int i = 0;
    int j = 0;
    while(str[i] != '\0')
    {
        value = str[i];
        j = 0;
        while(str[j] != '\0')
        {
            if(value == str[j] && j != i)
            {
                break;
            }
            ++j;
        }
        if(str[j] == '\0')
        {
            return i;
        }
        ++i;
    }
    return -1;
}

int main()
{
    char str[LEN] = "cc";
    int index = 0;
    index = firstUniqueChar(str);
    printf("第一个唯一字符索引为: %d\n", index);
    return 0;
}
