#include <stdio.h>

struct point3d
{
    double x;
    double y;
    double z;
};


void main() {
    struct point3d p = {3.141591, 2.171842, 1.121346};

    struct point3d *pp = &p; // struct pointer

    double p1 = 1.1111;
    double p2 = 2.2222;
    double p3 = 3.3333;

    pp->x = p1;

    printf("%p - %f\n", &pp->x, (*pp).x);
    printf("%p - %f\n", &pp->y, (*pp).y);
    printf("%p - %f\n", &pp->z, (*pp).z);
}