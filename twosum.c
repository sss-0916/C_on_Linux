#include "stdio.h"

#define LEN 2

int* twoSum(int* arr, int arr_size, int target)
{
    static int ret[2] = {0};
    int i = 0;
    int j = 0;
    for(i = 0; i < arr_size; ++i)
    {
        int temp = target - arr[i];
        for(j = 0; j < arr_size; ++j)
        {
            if(arr[j] == temp && i != j)
            {
                ret[0] = i;
                ret[1] = j;
            }
        }
    }
    return ret;
}

int main()
{
    int arr[] = {2, 7, 11, 15};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int i = 0;
    int* coordinate = twoSum(arr, arr_size, target);
    printf("和为目标值的数组内的下标为: \n");
    for(i = 0; i < LEN; ++i)
    {
        printf("%d ", *(coordinate + i));
    }
    printf("\n");
    return 0;
}
