/*
    Write a program that defines an arbitrary structure. 
    Create an instance of this structure in the main program. 
    Define a pointer variable that points at this structure instance. 
    Print the object fields using a pointer:
*/

#include <stdio.h>

typedef struct
{
    char arr[50];
    int x;
    double d;
} TStruct;


void main() {

    TStruct o = {"jksdfhksdhfksdf", 232, 943.39248430};
    TStruct *p = &o;

    printf("Pointer value = %p\n", p);
    printf("%s\n", p->arr);
    printf("%d\n", p->x);
    printf("%f\n", p->d);
}
