#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

const char* myStrstr(const char* dest, const char* src)
{
    assert(dest != NULL);
    assert(src != NULL);
    const char* temp = dest;
    while(*temp != '\0')
    {
        const char* temp_dest = temp;
        const char* temp_src = src;
        while(*temp_dest == *temp_src && *temp_dest != '\0')
        {
            ++temp_dest;
            ++temp_src;
        }
        if(*temp_src == '\0')
        {
            return temp;
        }
        ++temp;
    }
    return NULL;
}

int main()
{
    char str[] = "hello, world!";
    printf("strstr: %s\n", strstr(str, "world"));
    printf("myStrstr: %s\n", myStrstr(str, "world"));
    return 0;
}
