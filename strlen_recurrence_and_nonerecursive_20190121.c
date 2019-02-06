#include <stdio.h>
#include <assert.h>

int myStrlen1(char* str)
{
    assert(str != NULL);
    
    if(*str == '\0')
    {
        return 0;
    }
    return myStrlen1(++str) + 1;
}

int myStrlen2(char* str)
{
    assert(str != NULL);
    int ret = 0;

    while(*(str + ret) != '\0')
    {
        ++ret;
    }

    return ret;
}

int main()
{
    char str[] = "hello, world!";
    int len1 = 0;
    int len2 = 0;

    len1 = myStrlen1(str);
    len2 = myStrlen2(str);
    printf("%d\n", len1);
    printf("%d\n", len1);

    return 0;
}
