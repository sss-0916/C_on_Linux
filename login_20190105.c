#include "stdio.h"
#include "string.h"

#define LEN 1024

//模拟登陆
void login()
{
    char password[LEN] = "helloworld";
    char temp[LEN] = {0};
    int count = 0;
    while(1)
    {
        printf("请输入密码: \n");
        gets(temp);
        if(strcmp(password, temp) == 0)
        {
            printf("登陆成功!\n");
            break;
        }
        else
        {
            ++count;
            if(count == 3)
            {
                break;
            }
            printf("密码错误, 您还有%d次机会!\n", 3 - count);
            continue;
        }
    }
}

int main()
{
    login();
    return 0;
}
