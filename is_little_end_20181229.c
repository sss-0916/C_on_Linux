#include "stdio.h"

//大小端判断
int isLittleEnd()
{
    int num = 10;
    char* p = (char*)&num;
    if(*p == 10)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int flag = 0;
    flag = isLittleEnd();
    if(flag == 1)
    {
        printf("小端序!\n");
    }
    else
    {
        printf("大端序!\n");
    }
    return 0;
}
