#include "stdio.h"

#define LEN 4

//快速排序
void quickSort(int arr[], int left, int right)
{
    //出口
    if(left > right)
    {
        return;
    }
    int i = left;
    int j = right;
    int value = arr[left];
    while(i < j)
    {
        while(i < j && arr[j] >= value) 
        {
            --j;
        }
        arr[i] = arr[j];
        while(i < j && arr[i] <= value)
        {
            ++i;
        }
        arr[j] = arr[i];
    }
    arr[i] = value;
    quickSort(arr, left, i - 1);
    quickSort(arr, i + 1, right);
}

//数组去重, 求第三大的数
int removeDuplicate(int arr[], int len)
{
    int i = 0;
    int count = 0;
    for(i = 0; i < len; ++i)
    {
        if(arr[i] != arr[count])
        {
            ++count;
            arr[count] = arr[i];
        }
    }
    //如果元素个数少于三个, 返回最大值
    if(count < 2)
    {
        return arr[count];
    }
    //如果元素个数大于等于三个, 返回第三大的值
    else
    {
        return arr[count - 2];
    }
}

int main()
{
    int arr[LEN] = {2, 2, 3, 1};
    int result = 0;
    quickSort(arr, 0, LEN - 1);
    result = removeDuplicate(arr, LEN);
    printf("第三大的数为: %d\n", result);
    return 0;
}
