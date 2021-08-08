#include <stdio.h>

void main(int argc, char *argv[]) {

    for (size_t i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    };

}