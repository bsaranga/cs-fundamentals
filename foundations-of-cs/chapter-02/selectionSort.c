#include <stdio.h>

void SelectionSort(int A[], int len)
{
    int i, j, min, temp;

    for (i = 0; i < len - 1; i++)
    {
        min = i;
        for (j = i+1; j < len; j++)
            if(A[j] < A[min])
                min = j;

        temp = A[min];
        A[min] = A[i];
        A[i] = temp;
    }
}

void main() {
    
    int array[] = {21,6,7,3,2,1,8,0};
    int len = sizeof(array)/sizeof(array[0]);

    SelectionSort(array, len);

    for (size_t i = 0; i < len; i++)
    {
        printf("%d, ", array[i]);
    }

    printf("\n");
}