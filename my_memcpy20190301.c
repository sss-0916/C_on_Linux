#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <time.h>

int randomNumber()
{
    return 11 + rand() % (99 - 11 + 1);
}

void arrInit(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        arr[i] = randomNumber();
    }
}

void arrDisplay(int arr[], int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
    {
        printf("%-5d", arr[i]);
    }
    printf("\n");
}

void* myMemcpy(void* dest, const void* src, size_t num)
{
    assert(dest != NULL);
    assert(src != NULL);
    char* temp_dest = (char*)dest;
    char* temp_src = (char*)src;
    while(num)
    {
        *temp_dest = *temp_src;
        --num;
    }

}

int main()
{
    srand((unsigned int)time(0));
    int arr1[5] = {0};
    int arr2[5] = {0};
    arrInit(arr1, 5);
    arrInit(arr2, 5);
    printf("The origin arr1 is: \n");
    arrDisplay(arr1, 5);
    printf("The origin arr2 is: \n");
    arrDisplay(arr2, 5);
    myMemcpy(arr2, arr1, sizeof(int) * 5);
    printf("The arr2 after memcpy: \n");
    arrDisplay(arr2, 5);
    return 0;
}
