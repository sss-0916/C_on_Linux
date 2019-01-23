#include <stdio.h>
#include <assert.h>

int myStrlen(char* str)
{
    int ret = 0;
    while(*(str + ret) != '\0')
    {
        ++ret;
    }
    return ret;
}

void reverseString(char* str)
{
    assert(str != NULL);
    int len = myStrlen(str);

    if(len > 1)
    {
        char temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = '\0';
        reverseString(str + 1);
        str[len - 1] = temp;
    }
    return;
}

int main()
{
    char str[] = "hello, world!";
    printf("初始字符串打印如下: %s\n", str);
    reverseString(str);
    printf("反转后的字符串打印如下: %s\n", str);
    return 0;
}
