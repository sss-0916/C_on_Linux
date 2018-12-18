#include "stdio.h"

#define M 6
#define N 3
//方法一: 将数组2插入到数组1, 再排序
/*
//交换
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
    for(bound = 0; bound < M; ++bound)
    {
        int cur = 0;
        for(cur = M - 1; cur > bound; --cur)
        {
            if(arr[cur] < arr[cur - 1])
            {
                swap(&arr[cur], &arr[cur - 1]);
            }
        }
    }
}

//将两个数组合并
void merge(int nums1[], int m, int nums2[], int n)
{
    int i = 0;
    int j = 0;
    for(i = m, j = 0; j < n; ++i, ++j)
    {
        nums1[i] = nums2[j];
    }
}
*/

void arrDisplay(int arr[], int len)
{
    int i = 0; 
    for(i = 0; i < len; ++i)
    {
        printf("%-2d", arr[i]);
    }
    printf("\n");
}


//方法二
void merge(int nums1[], int m, int nums2[], int n)
{
    int p = m-- + n-- - 1;
    while(m >= 0 && n >= 0)
    {
        nums1[p--] = nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
    }
    while(n >= 0)
    {
        nums1[p--] = nums2[n--];
    }
}

int main()
{
    int nums1[M] = {1, 2, 3, 0, 0, 0};
    int nums2[N] = {2, 5, 6};
    printf("数组1打印如下: \n");
    arrDisplay(nums1, M - N);
    printf("数组2打印如下: \n");
    arrDisplay(nums2, N);
    merge(nums1, M - N, nums2, N);
    //printf("合并后的两个数组打印如下: \n");
    //arrDisplay(nums1, M);
    //bubbleSort(nums1);
    printf("合并后的数组排序后打印如下: \n");
    arrDisplay(nums1, M);
    return 0;
}
