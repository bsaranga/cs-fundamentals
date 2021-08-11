#include <stdio.h>

union myUnion {
    char c;
    char d;
};

void main() {

    union myUnion u;
    u.c = 'C';
    u.d = 'D';

    printf("%c\n", u.c);
    
}