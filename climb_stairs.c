#include "stdio.h"

//爬楼梯方案--递归法
/*
int climbStairs(int stairs)
{
   if(stairs == 1)
   {
       return 1;
   }
   else if(stairs == 2)       
   {
       return 2;
   }
   else
   {
       return climbStairs(stairs - 1) +
              climbStairs(stairs - 2);
   }
}
*/

//爬楼梯方案--非递归法
int climbStairs(int stairs)
{
    if(stairs == 1)
    {
        return 1;
    }
    else if(stairs == 2)
    {
        return 2;
    }
    else
    {
        int n_1 = 2;
        int n_2 = 1;
        int n_n = 0;
        int i = 0;
        for(i = 3; i <= stairs; ++i)
        {
            n_n = n_1 + n_2;
            n_2 = n_1;
            n_1 = n_n;
        }
        return n_n;
    }
}

int main()
{
    int stairs = 0;
    int plans = 0;
    printf("请输入楼梯阶数: \n");
    scanf("%d", &stairs);
    plans = climbStairs(stairs); 
    printf("共有%d种方案!\n", plans);
    return 0;
}
