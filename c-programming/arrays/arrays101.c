#include <stdio.h>

int main()
{
    int myArrInt[5] = {1,2,3,4,5};
    float myArrFloat[5] = {1.0,2.0,3.1,4.1,5.21};

    printf("%lu\n", sizeof(myArrInt)/sizeof(int));
    printf("%lu\n", sizeof(myArrFloat)/sizeof(float));

    char myString[] = "aaa";
    printf("%s\n", myString);

    for (int i = 0; i < sizeof(myString)/sizeof(char); i++)
    {
        printf("%c\n", myString[i]);
    };

    // better way of obtaining the size of an array

    size_t arrSize = sizeof(myString)/sizeof(myString[0]);
    printf("Array size: %d\n", arrSize);

    return 0;
}