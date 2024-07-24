#include "sort.h"

int bubbleSort(int *arr, int arrSize);

int main() {
    bubbleSort(testArr, testArrSize);
    printArray(testArr, testArrSize);
    return 0;
}

int bubbleSort(int *arr, int arrSize) {
    int swapped;
    for (int firstElement = 0; firstElement < arrSize - 1; firstElement++) {
        swapped = 0;
        for (int secondElement = 0; secondElement < arrSize - firstElement - 1; secondElement++) {
            if (arr[secondElement] > arr[secondElement + 1]) {
                swap(&arr[secondElement], &arr[secondElement + 1]);
                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
        }
    }
}