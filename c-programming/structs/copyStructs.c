#include <stdio.h>

typedef struct
{
    char c;
    int x;
    double d;
} myStruct;


void main() {
    myStruct s1 = {'a', 123, 456.789};
    myStruct s2;

    s2 = s1;
    printf("%c, %d, %f\n", s2.c, s2.x, s2.d);
}