#include <stdio.h>

void printMessage() {
    printf("Hello World\n");
}

int sum(int x, int y) {
    return x + y;
}

void aFunctionThatReturnsNothing(void); // declaration of a funtion
int aFunctionThatReturnsInts(void); // declaration of a funtion

void main() {
    printMessage();
    printf("%d\n", aFunctionThatReturnsInts());
}

int aFunctionThatReturnsInts(void) {
    return 42;
}