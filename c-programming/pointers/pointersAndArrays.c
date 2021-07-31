#include <stdio.h>

void main() {

    int myArr[5] = {0,1,2,3,4};
    int* p = myArr;

    printf("%d at %p\n", *p, p); // we see that the pointer points to the first array element

    for (size_t i = 0; i < sizeof(myArr)/sizeof(myArr[0]); i++)
    {
        *(p+i) += 1;
        *(p+i) *= 2;

        printf("%p - %d\n", p, *(p + i));
    }
    
}