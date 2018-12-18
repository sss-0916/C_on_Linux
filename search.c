#include "stdio.h"
#include "time.h"

#define LEN 20

//数组打印
void arrDisplay(int arr[])
{
    int i = 0;
    for(i = 0; i < LEN; ++i)
    {
        printf("%-3d", arr[i]);
        if((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
}

//目标值查找
int search(int nums[], int target)
{
    int left = 0;
    int right = LEN;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(target > nums[mid])
        {
            left = mid + 1;
        }
        else if(target < nums[mid])
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

//交换函数
void swap(int* p1, int* p2)
{
    int temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//冒泡排序
void bubbleSort(int arr[])  
{
    int bound = 0;
    for(bound = 0; bound < LEN; ++bound)
    {
        int cur = 0;
        for(cur = LEN - 1; cur > bound; --cur)
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
    int arr[LEN] = {0};
    int i = 0;
    int index = 0;
    int target = 0;
    printf("请输入要查找的目标值: \n");
    scanf("%d", &target);
    //数组元素的初始化
    for(i = 0; i < LEN; ++i)
    {
        //随机值范围[8, 21]
        arr[i] = 8 + rand() % (21 - 8 + 1);
    }
    printf("初始数组打印如下: \n");
    arrDisplay(arr);
    bubbleSort(arr);
    printf("排序后的数组打印如下: \n");
    arrDisplay(arr);
    index = search(arr, target);
    printf("%d在数组中的下标为: %d\n", target, index);
    return 0;
}
