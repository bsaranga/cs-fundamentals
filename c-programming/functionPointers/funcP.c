#include <stdio.h>

void myFunc() {
    printf("Hello world\n");
}

void mult(char *arg1, int arg2)
{
    printf("%s %d\n", arg1, arg2);
}

void main() {
    void (*fp)();
    fp = myFunc;
    fp();

    void (*fpp)(char *, int);
    fpp = mult;
    fpp("Value is:", 454);
}