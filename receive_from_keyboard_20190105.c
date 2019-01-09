#include "stdio.h"

//接收
void receive()
{
    char temp = 0;
    printf("请输入字符: \n");
    while(1)
    {
        temp = getchar();
        if(temp >= 'a' && temp <= 'z')
        {
            temp -= 'a' - 'A';
            putchar(temp);
            continue;
        }
        else if(temp >= 'A' && temp <= 'Z')
        {
            temp -= 'A' - 'a'; 
            putchar(temp);
            continue;
        }
        else if(temp >= '0' && temp <= '9')
        {
            continue;
        }
        else
        {
            putchar(temp);
        }
    }
}

int main()
{
    receive();
    return 0;
}
