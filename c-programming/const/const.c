#include <stdio.h>

void main(void) {
    
    // these cannot be modified, they will result in a compile time error.
    const char c = 'a';
    const int x = 123;
    const double d = 456.789;

    // const pointers

    int y = 125;
    int *const p = &y; // read-only pointer

    *p = 45; // the pointed to object is modifiable.

    printf("%d\n", y);

    int xy = 90;
    const int * p1 = &xy;
    p1++; // pointer is modifiable
    //*p1 = 0; // this results in compile time error.

    // to make both constant

    int xyz = 1;
    const int *const pointer = &xyz;
    // *pointer++; // results in compile time error.
    // pointer++; // results in compile time error.
}