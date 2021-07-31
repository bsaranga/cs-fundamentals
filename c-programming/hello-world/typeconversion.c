#include <stdio.h>

int main() {
    char c = 'A';
    int cToInt = (int)c; // explicit type conversion

    printf("%d\n", cToInt);

    int x = 10;
    int y = 30;
    double d = x/y; // implicit type conversion -- results in zero.zerozerozerozero
    double dd = (double) x/y;
    
    printf("%lf\n", dd);
    return 0;
}