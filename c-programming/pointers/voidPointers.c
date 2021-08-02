#include <stdio.h>

void main() {

    int myArr[5] = {1,2,3,4,5};
    int* myArrPtr = myArr; // typed pointer
    //printf("%d", *(myArrPtr + 1));

    int theArr[3] = {2,1,2};
    void * theArrPtr = theArr;
    //printf("%d", *theArr);

    int myInt = 5;
    void * myIntPtr = &myInt;

    printf("%d\n", *(int*)myIntPtr); // void pointer must be cast to the appropriate pointer type before dereferencing

    printf("%p", myIntPtr);

    printf("\n");
}