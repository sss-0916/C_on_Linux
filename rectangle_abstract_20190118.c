#include "stdio.h"
#include "stdlib.h"

// 矩形结构体
struct Rectangle
{
    double length;
    double width;
};

typedef struct Rectangle Rectangle;

// 矩形初始化
Rectangle* rectangleInit(double l, double w)
{
    Rectangle* temp = (Rectangle*)malloc(sizeof(Rectangle));
    temp->length = l;
    temp->width = w;
    return temp;
}

// 矩形面积
double rectangleArea(Rectangle* r)
{
    return r->length * r->width;
}

// 矩形周长
double rectanglePerimeter(Rectangle* r)
{
    return (r->length + r->width) * 2;
}

// 矩形释放
void rectangleFree(Rectangle* r)
{
    free(r);
}

int main()
{
    Rectangle* r1;
    r1 = rectangleInit(2, 4);
    printf("该矩形的周长为: %lf\n",
            rectanglePerimeter(r1));
    printf("该矩形的面积为: %lf\n", 
            rectangleArea(r1));
    return 0;
}
