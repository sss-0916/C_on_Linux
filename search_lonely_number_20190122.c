#include <stdio.h>

int searchLonelyNumber(int arr[], int len)
{
    int ret = 0;
    int i = 0;
    
    for(i = 0; i < len; ++i)
    {
        ret ^= arr[i];
    }

    return ret;
}

int main()
{
    int arr[] = {
        1, 2, 3, 4, 3, 2, 1
    };
    int single_number = 0;
    int len = sizeof(arr) / sizeof(arr[0]);

    single_number = searchLonelyNumber(arr, len);
    printf("只出现过一次的数字为: %d\n", 
            single_number);

    return 0;
}
