#include <stdio.h>

int adder(int x);
void adderPtr(int *x);

void main() {

    // passing by value
    int xo = 304;
    printf("Func output: %d\n", adder(xo));
    printf("Var: %d\n", xo);

    // passing by reference
    adderPtr(&xo);
    printf("Var after function call: %d\n", xo);
}

int adder(int x) {
    return x + 1;
}

void adderPtr(int *x) {
    *x += 1;
}