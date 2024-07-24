#include <stdio.h>

int printArray(int *arr, int arrSize) {
    for (int printedElement = 0; printedElement < arrSize; printedElement++) {
        printf("%d, ", arr[printedElement]);
    }
}

/**
 * Swap two elements in an array
 */
void swap(int* e1, int* e2)
{
    int temp = *e1;
    *e1 = *e2;
    *e2 = temp;
}