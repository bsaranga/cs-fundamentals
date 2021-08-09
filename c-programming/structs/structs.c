#include <stdio.h>

typedef struct 
{
    char c;
    int x;
    double d;
} myStruct;

// initialization on declaration

struct point3d {
    int x;
    int y;
    int z;
} p = {3,2,1};

void main() {

    myStruct s0 = {'a', 45, 3.14159}; // initialization
    printf("%c, %d, %f\n", s0.c, s0.x, s0.d);

    //initialization by member name
    myStruct s = {.x = 42, .c = 'x', .d = 2.1718211};
    printf("%c, %d, %f\n", s.c, s.x, s.d);

    p.x = 3; p.y = 3; p.z = 3;

    printf("(%d, %d, %d)\n", p.x, p.y, p.z);

    myStruct s_copy = s;
    printf("%c, %d, %f\n", s_copy.c, s_copy.x, s_copy.d);

}