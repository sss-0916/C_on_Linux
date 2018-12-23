#include "stdio.h"
#include "time.h"
#include "limits.h"

#define LEN 10
//方法一: 暴力解法
/*
//最大利润计算
int maxProfit(int prices[])
{
    int profit = 0;
    int i = 0;
    int j = 0;
    for(i = LEN - 1; i >= 0; --i)
    {
        for(j = i - 1; j >= 0; --j)
        {
            if(prices[i] - prices[j] > profit)
            {
                profit = prices[i] - prices[j];
            }
        }
    }
    return profit;
}
*/

//求最大值函数
int max(int n1, int n2)
{
    return n1 > n2 ? n1 : n2;
}

//求最小值函数 
int min(int n1, int n2)
{
    return n1 < n2 ? n1 : n2;
}

//方法二: 一次遍历
int maxProfit(int prices[])
{
    int i = 0;
    int min_profit = INT_MAX;
    int max_profit = 0;
    for(i = 0; i < LEN; ++i)
    {
        min_profit = min(min_profit, prices[i]);
        max_profit = max(max_profit, prices[i] - min_profit);
    }
    return max_profit;
}

//数组打印
void arrDisplay(int arr[])
{
    int i = 0; 
    for(i = 0; i < LEN; ++i)
    {
        printf("%-4d", arr[i]);
    }
    printf("\n");
}

int main()
{
    //设置随机种子
    srand((unsigned int)time(0));
    int prices[LEN] = {0};
    int i = 0;
    int max_profit = 0;
    //数组元素的初始化 
    for(i = 0; i < LEN; ++i)
    {
        //随机值[5, 13]
        prices[i] = 5 + rand() % (13 - 5 + 1);
    }
    printf("连续十天的股票价格打印如下: \n");
    arrDisplay(prices);
    max_profit = maxProfit(prices);
    printf("最大利润为: %d\n", max_profit);
    return 0;
}
