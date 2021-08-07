#include <stdio.h>

void main() {

    /*
    int myArr[5] = {1,2,3,4,5};
    int* myArrPtr = myArr; // typed pointer
    //printf("%d", *(myArrPtr + 1));

    int theArr[3] = {2,1,2};
    void * theArrPtr = theArr;
    //printf("%d\n", *theArr);

    int myInt = 5;
    void * myIntPtr = &myInt;

    //printf("%d\n", *(int*)myIntPtr); // void pointer must be cast to the appropriate pointer type before dereferencing

    //printf("%p", myIntPtr);

    //printf("\n");
    */

   int foo = 777;
   int * fooPtr = &foo;
   printf("%p\n", fooPtr);
   printf("%d\n", *fooPtr);

   int myArray[5] = {0,1,2,3,4};
   void * myArrayPtr = myArray;
   printf("%p\n", myArrayPtr);
   
   for (size_t i = 0; i < sizeof(myArray)/sizeof(myArray[0]); i++)
   {
       printf("%d\n", *((int*)myArrayPtr + i));
   }
   
}