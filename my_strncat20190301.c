#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char* myStrncat(char* dest, const char* src, size_t num)
{
    assert(dest != NULL);
    assert(src != NULL);
    char* temp = dest;
    while(*temp != '\0')
    {
        ++temp;
    }
    while(num && *src != '\0')
    {
        *temp = *src;
        ++temp;
        ++src;
        --num;
    }
    if(num == 0)
    {
        *temp = '\0';
    }
    return dest;
}

int main()
{
    char str[1024] = "hello, ";
    printf("strncat: %s\n", strncat(str, "world!", 6));
    printf("myStrncat: %s\n", myStrncat(str, "world!", 6));
    return 0;
}
