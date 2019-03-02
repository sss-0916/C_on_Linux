#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char* myStrncpy(char* dest, const char* src, size_t num)
{
    assert(dest != NULL);
    assert(src != NULL);
    char* temp = dest;
    while(num && *src != '\0')
    {
        *temp = *src;
        ++temp;
        ++src;
        --num;
    }
    *temp = '\0';
    return dest;
}

int main()
{
    char str[1024];
    printf("strncpy: %s\n", strncpy(str, "hello, strncpy!", 15));
    printf("myStrncpy: %s\n", myStrncpy(str, "hello, myStrncpy!", 17));
    return 0;
}
