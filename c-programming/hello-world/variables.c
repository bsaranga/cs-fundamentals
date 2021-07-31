#include <stdio.h>

int outerVar = 55;

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    int a = 1;
    int b = 2;
    int c;

    c = a + b;

    int max = __INT32_MAX__;

    printf("a + b = %d\n", c);
    printf("Outer var = %d\n", outerVar);

    printf("Factorial(5) = %d\n", factorial(5));
    printf("Int MAX = %d", max);
    return 0;
};