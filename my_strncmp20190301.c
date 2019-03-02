#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int myStrncmp(const char* str1, const char* str2, size_t num)
{
    assert(str1 != NULL);
    assert(str2 != NULL);
    while(num && *str1 == *str2)
    {
        ++str1;
        ++str2;
        --num;
    }
    if(num == 0)
    {
        return 0;
    }
    return *str1 - *str2;
}

int main()
{
    char str[] = "hello, world!";
    printf("strncmp: %d\n", strncmp(str, "hello", 5));
    printf("myStrncmp: %d\n", myStrncmp(str, "hello", 5));
    return 0;
}
