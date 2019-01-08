#include "stdio.h"

//闰年判断
int isLeapYear(int year)
{
    if(year % 400 == 0 || 
      (year % 4 == 0 && year % 100 != 0))
    {
        return 1;
    }
    return 0;
}

//闰年打印1000~2000
void leapYearDisplay()
{
    int year = 0;
    int flag = 0;
    int count = 0;
    for(year = 1000; year <= 2000; ++year)
    {
        flag = isLeapYear(year);
        if(flag == 1)
        {
            if(count % 10 == 0)
            {
                printf("\n");
            }
            ++count;
            printf("%-6d", year);
        }
    }
    printf("\n");
}

int main()
{
    printf("1000~2000之间的闰年打印如下: ");
    leapYearDisplay();
    return 0;
}
