#include "stdio.h"
#include "time.h"

#define LEN 10

//元素移除
int removeElement(int arr[], int len, int val)
{
    int count = 0;
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        if(arr[i] != val)
        {
            arr[count] = arr[i];
            ++count;
        }
    }
    return count;
}

//数组打印
void arrDisplay(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        printf("%-2d", arr[i]);
    }
    printf("\n");
}

int main()
{
    //设置随机种子
    srand((unsigned int)time(0));
    int value = 0;
    int arr[LEN] = {0}; 
    int i = 0;
    int result = 0;
    //数组元素的初始化
    for(i = 0; i < LEN; ++i)
    {
        //随机产生[1, 5]中的元素
        arr[i] = 1 + rand() % (5 - 1 + 1);
    }
    printf("初始数组打印如下: \n");
    arrDisplay(arr, LEN);
    printf("请输入要移除的元素: \n");
    scanf("%d", &value);
    result = removeElement(arr, LEN, value); 
    printf("移除%d后的数组打印如下: \n", value);
    arrDisplay(arr, result);
    return 0;
}
