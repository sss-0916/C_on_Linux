#include <stdio.h>
#include <assert.h>

int myStrlen(char* str)
{
    if(*str == '\0')
    {
        return 0;
    }
    return myStrlen(++str) + 1;
}

void reverseString(char* start, char* end)
{
    assert(start != NULL);
    assert(end != NULL);
    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }
}

void reverse(char* str)
{
    assert(str != NULL);
    char* start = str;
    char* end = str + myStrlen(str) - 1;
    char* temp = NULL;
    // 整体反转
    reverseString(start, end);
    while(*str != '\0')
    {
        temp = str;
        while((*str != '\0') && (*str != ' '))
        {
            ++str;
        }
        char* right = str - 1;
        // 部分反转
        reverseString(temp, right);
        if(*str == ' ')
        {
            ++str;
        }
    }
}

int main()
{
    char str[] = "student a am i";

    printf("初始字符串打印如下: %s\n", str);
    reverse(str);
    printf("调整后的字符串打印如下: %s\n", str);

    return 0;
}
