#include "stdio.h"
#include "string.h"

#define LEN 100

//字符串是否是另一字符串循环左移得到的
//int isRotateLeft(char* dest, char* src)
//{
//    if(strlen(dest) != strlen(src))
//    {
//        return 0;
//    }
//    int len = strlen(src);
//    while(len >= 0)
//    {
//        rotateLeft(src, 1);
//        if(strcmp(src, dest) == 0)
//        {
//            return 1;
//        }
//    }
//    return 0;
//}

//子串法
//一个字符串是否是另一个字符串循环移位得到的
int isRotateLeft(char* dest, char* src)
{
    int len = strlen(dest);
    strncat(dest, dest, len);
    if(strstr(dest, src) != NULL)
    {
        return 1;
    }
    return 0;
}

int main()
{
    char arr1[LEN] = "abcdefg";
    char arr2[LEN] = "defgabc";
    int flag = 0;
    flag = isRotateLeft(arr1, arr2);
    if(flag == 1)
    {
        printf("是!\n");
    }
    else
    {
        printf("不是!\n");
    }
    return 0;
}
