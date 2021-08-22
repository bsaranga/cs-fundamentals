#include <stdio.h>

#define PRINT(a) printf("%d\n", a);

#define LOOP(v,s,e) for(int v = s; v <= e; v++) {

#define ENDLOOP }

void main() {

    LOOP(counter, 1, 10)
    PRINT(counter)
    ENDLOOP
    
}