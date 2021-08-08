#include <stdio.h>

void main() {
    
    char *p[] = {"First", "Second", "Third"};

    for (int i = 0; i < (sizeof(p) - 1); i++)
    {
        printf("%d\n", i);
        printf("%s\n", p[i]);
    }
    
}