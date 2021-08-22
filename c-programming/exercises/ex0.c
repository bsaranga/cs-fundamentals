/*
    Write a program that defines a simple structure called 'Person'. 
    The structure has the char*, int and double fields. 
    Declare a variable of this struct and assign values to the member fields
*/
#include <stdio.h>

struct Person {
    char* name;
    int age;
    double salary;
};

void main() {

    struct Person JohnDoe;
    JohnDoe.name = "John Doe";
    JohnDoe.age = 28;
    JohnDoe.salary = 75000.5;
    
    printf("%s\n", JohnDoe.name);
    printf("%d\n", JohnDoe.age);
    printf("%f\n", JohnDoe.salary);

}