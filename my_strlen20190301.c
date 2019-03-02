#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

size_t myStrlen(const char* str)
{
    assert(str != NULL);
    size_t len = 0;
    while(*str != '\0')
    {
        ++str;
        ++len;
    }
    return len;
}

int main()
{
    char str[] = "hello, world!";
    printf("myStrlen(str): %lu\n", myStrlen(str));
    printf("strlen(str): %lu\n", strlen(str));
    return 0;
}
