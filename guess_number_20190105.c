#include "stdio.h"
#include "time.h"

//猜数字游戏
void guessNumber()
{
    //目标值范围[0, 100]
    int target = 0 + rand() % (99 - 11 + 1);
    int num = 0;
    while(1)
    {
        printf("请输入您的答案: \n");
        scanf("%d", &num);
        if(num > target)
        {
            printf("大了!\n");
            continue;
        }
        else if(num < target)
        {
            printf("小了!\n");
            continue;
        }
        else
        {
            printf("恭喜你, 猜对了!\n");
            break;
        }
    }
}

int main()
{
    srand((unsigned int)time(0));
    guessNumber();
    return 0;
}
