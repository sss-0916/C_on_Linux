#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char* myStrcat(char* dest, const char* src)
{
    assert(dest != NULL);
    assert(src != NULL);
    char* temp = dest;
    while(*temp != '\0')
    {
        ++temp;
    }
    while(*src != '\0')
    {
        *temp = *src;
        ++temp;
        ++src;
    }
    *temp = '\0';
    return dest;
}

int main()
{
    char str[1024];
    printf("strcat: %s\n", strcat(str, "hello, strcat!"));
    printf("myStrcat: %s\n", myStrcat(str, "hello, myStrcat!"));
    return 0;
}
