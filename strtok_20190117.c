#include "stdio.h"
#include "string.h"

int main()
{
    char str[] = ", . This ,is -a. simple-- string";
    char* p;
    printf("初始字符串打印如下: \n%s\n", str);
    printf("切分后的结果打印如下: \n");
    p = strtok(str, " ,.-");
    while(p != NULL)
    {
        printf("%s\n", p);
        p = strtok(NULL, " ,.-");
    }
    return 0;
}
