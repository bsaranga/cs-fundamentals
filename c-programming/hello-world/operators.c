#include <stdio.h>

int main()
{
    int x = 10;
    int y = 10;

    int xd = ++x; // increment and assign
    int yd = y++; // assign and increment

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("xd = %d\n", xd);
    printf("yd = %d\n", yd);
    return 0;
}