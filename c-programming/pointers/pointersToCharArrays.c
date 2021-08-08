#include <stdio.h>

void main() {

    char* p = "Hello world!";

    printf("%p\n", p); // points to the first character of the character array
    printf("%s\n", p); // this format specifier prints the entire array
    printf("%c\n", *p); // prints out the first character, note the dereferencing
}