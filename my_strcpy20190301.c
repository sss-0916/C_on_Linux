#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char* myStrcpy(char* dest, const char* src)
{
    assert(dest != NULL);
    assert(src != NULL);
    char* temp = dest;
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
    printf("myStrcpy(str): %s\n", 
            myStrcpy(str, "hello, mystrcpy!"));
    printf("strcpy(str): %s\n", 
            strcpy(str, "hello, strcpy!"));
    return 0;
}
