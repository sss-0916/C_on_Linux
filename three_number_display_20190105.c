#include "stdio.h"
#include "time.h"

#define LEN 3

//数组初始化
void arrInit(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        //随机值范围[11, 99]
        arr[i] = 11 + rand() % (99 - 11 + 1);
    }
}

//数组打印
void arrDisplay(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        if(i % 10 == 0)
        {
            printf("\n");
        }
        printf("%-5d", arr[i]);
    }
    printf("\n");
}

//交换
void swap(int* p1, int* p2)
{
    int temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//从小到大排序
void sort(int arr[], int len)
{
    int bound = 0;
    int cur = 0;
    for(bound = 0; bound < len; ++bound)
    {
        for(cur = len - 1; cur > bound; --cur)
        {
            if(arr[cur] < arr[cur - 1])
            {
                swap(&arr[cur], &arr[cur - 1]);
            }
        }
    }
}

int main()
{
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    arrInit(arr, LEN);
    printf("三个数打印如下: ");
    arrDisplay(arr, LEN);
    sort(arr, LEN);
    printf("三个数从小到大输出为: ");
    arrDisplay(arr, LEN);
    return 0;
}
