#include "stdio.h"

#define LEN 10

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

//元素交换
void swap(int* p1, int* p2)
{
    int temp = *p1;
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

//移除重复元素
int removeDuplicates(int arr[])
{
    if(LEN == 0)
    {
        return 0;
    }
    int i = 0;
    int count = 0;
    for(i = 0; i < LEN; ++i)
    {
        if(arr[i] != arr[count])
        {
            ++count;
            arr[count] = arr[i];
        }
    }
    return count + 1;
}

//插入位置查找
int searchInsert(int arr[], int len, int target)
{
    int i = 0; 
    for(i = 0; i < len; ++i)
    {
        if(target < arr[0])
        {
            return 0;
        }
        if(target == arr[i])
        {
            return i;
        }
        if(target > arr[i] && target < arr[i + 1])
        {
            return i + 1;
        }
    }
    return len;
}

int main()
{
    srand((unsigned int)time(0));
    int arr[LEN] = {0};
    int i = 0;
    int len = 0;
    int index = 0;
    int target = 0;
    //数组元素的初始化
    for(i = 0; i < LEN; ++i)
    {
        //随机值范围为[0, 9]
        arr[i] = 0 + rand() % (9 - 0 + 1); 
    }
    printf("初始数组打印如下: \n");
    arrDisplay(arr, LEN);
    bubbleSort(arr);
    printf("已序数组打印如下: \n");
    arrDisplay(arr, LEN);
    len = removeDuplicates(arr);
    printf("已删除重复元素的数组: \n");
    arrDisplay(arr, len);
    printf("请输入要插入的目标值: \n");
    scanf("%d", &target);
    index = searchInsert(arr, len, target); 
    printf("要插入的下标为: %d\n", index);
    return 0;
}
