/*
    Write a program that defines a typedef alias for the structure type TPerson.
    The structure has the char*, int and double fields. 
    Declare a variable of this struct and assign values to the member fields
*/
#include <stdio.h>

typedef struct {
    char* name;
    int age;
    double salary;
} TPerson;

typedef enum {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
} DOW;

void main() {

    TPerson JohnDoe;
    JohnDoe.name = "John Doe";
    JohnDoe.age = 28;
    JohnDoe.salary = 75000.5;
    
    printf("%s\n", JohnDoe.name);
    printf("%d\n", JohnDoe.age);
    printf("%f\n", JohnDoe.salary);

    DOW week0 = Monday;
    printf("%d\n", week0);
}