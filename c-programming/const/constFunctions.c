#include <stdio.h>

void myFunc(const int *myParam)
{
    printf("%p\n", myParam);
    printf("%d\n", *myParam);
    myParam++;
    printf("%p\n", myParam);
    printf("%d\n", *myParam);
    // *myParam += 2; // results in compile time error
}

void main(void) {
    int x = 123;
    int *p = &x;

    myFunc(p);
}