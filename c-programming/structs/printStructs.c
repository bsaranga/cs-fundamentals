#include <stdio.h>

struct point2d
{
    double x;
    double y;
};

void printStruct(struct point2d * param)
{
    printf("(%f, %f)\n", param->x, param->y);
}

void main() {
    struct point2d p1 = {3.14159, 6.264512};
    printStruct(&p1);
}