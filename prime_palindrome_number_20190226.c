#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrimeNumber(int n)
{
    int i = 0;
    for(i = 2; i <= (int)sqrt(n); ++i)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int isPalindromeNumber(int n)
{
    int temp = n;
    int sum = 0;
    while(temp)
    {
        sum = sum * 10 + temp % 10;
        temp /= 10;
    }
    if(sum == n)
    {
        return 1;
    }
    return 0;
}

int* primePalindromeNumber(int left, int right, int* cnt)
{
    int i = 0;
    int* ret = NULL;
    for(i = left; i <= right; ++i)
    {
        if(isPrimeNumber(i) && isPalindromeNumber(i))
        {
            ++(*cnt);
            ret = (int*)realloc(ret, sizeof(int) * (*cnt));
            ret[*cnt - 1] = i;
        }
    }
    return ret;
}

int main()
{
    int i = 0;
    int* ret = NULL;
    int cnt = 0;
    int left = 0;
    int right = 0;
    printf("Please input left and right: \n");
    scanf("%d %d", &left, &right);
    ret = primePalindromeNumber(left, right, &cnt);
    printf("There are %d prime palindrome numbers in [%d, %d].", 
            cnt, left, right);
    printf("The prime palindrome number is below: \n");
    for(i = 0; i < cnt; ++i)
    {
        printf("%d  ", ret[i]);
    }
    printf("\n");
    free(ret);
    ret = NULL;
    return 0;
}
