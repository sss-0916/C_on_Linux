#include "stdio.h"
#include "stdlib.h"

int global = 20;

void test()
{

}

int main()
{
    int* ptr = (int*)malloc(4);
    int local = 10;
    printf("栈: %p\n", &local);
    printf("堆: %p\n", ptr);
    printf("数据段: %p\n", &global);
    printf("代码段: %p\n", test);
    return 0;
}
