#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int myStrcmp(const char* str1, const char* str2)
{
    assert(str1 != NULL);
    assert(str2 != NULL);
    while(*str1 == *str2 && *str1 != '\0')
    {
        ++str1;
        ++str2;
    }
    return *str1 - *str2;
}

int main()
{
    char str[] = "hello, world!";
    printf("strcmp: %d\n", strcmp(str, "hello"));
    printf("myStrcmp: %d\n", myStrcmp(str, "hello"));
    return 0;
}
