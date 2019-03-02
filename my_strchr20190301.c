#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

const char* myStrchr(const char* str, char c)
{
    while(*str != '\0')
    {
        if(*str == c)
        {
            return str;
        }
        ++str;
    }
    return NULL;
}

int main()
{
    char str[] = "hello, world!";
    printf("strchr: %s\n", strchr(str, 'w'));
    printf("myStrchr: %s\n", myStrchr(str, 'w'));
    return 0;
}
