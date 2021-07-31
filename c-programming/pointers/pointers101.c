#include <stdio.h>

int main() {

    int x = 123;
    int* p = &x;

    printf("%p\n", p); // memory location of x
    printf("%d\n", *p); // dereferncing the pointer p to obtain the value of the object that p points to

    *p = 456; // dereference and assignment of new value
    printf("%d\n", x); // new value of x

    // this is my comment

    float pi = 3.14159;
    float e = 2.178124;

    float* fp;

    fp = &pi;
    *fp *= 2;

    fp = &e;
    *fp *= 2;

    printf("%f\n", pi);
    printf("%f\n", e);
    printf("jkdhfksjdf");

    return 0;
}