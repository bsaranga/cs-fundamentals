/*
    Write a program that defines a union type using a typedef alias. 
    The union has the fields of type char*, int, and double. 
    Create an instance of this union in the main program. 
    Modify and print each of the fields. 
    Ensure that only the last modified field is accessed.
*/

#include <stdio.h>

typedef union {

    char *arr;
    int x;
    double d;
    
} TMyUnion;

void main() {

    TMyUnion u;

    u.arr = "Hello world from a union!";
    printf("%s\n", u.arr);

    u.x = 123;
    printf("%d\n", u.x);

    u.d = 3.14159;
    printf("%f\n", u.d);

}