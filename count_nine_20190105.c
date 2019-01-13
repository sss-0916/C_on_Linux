#include "stdio.h"

//统计9出现的次数
int countNine()
{
    int i = 0;
    int count = 0;
    for(i = 1; i <= 100; ++i)
    {
        if(i % 10 == 9)
        {
            ++count;
        }
        if(i / 10 == 9)
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    int count = 0;
    count = countNine();
    printf("1~100中9出现了%d次!\n", count);
    return 0;
}
