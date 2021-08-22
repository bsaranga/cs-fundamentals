/*
    Write a program that defines a structure. 
    The structure has the char[], int, and double fields. 
    Declare and initialize a variable of this structure type. Print out the values.
*/

#include <stdio.h>

typedef struct {

    char name[50];
    int age;
    double salary;

} TPerson;

void main() {

    TPerson person = {"John Doe", 28, 12.56546};
    printf("%s\n", person.name);
    printf("%d\n", person.age);
    printf("%f\n", person.salary);
}