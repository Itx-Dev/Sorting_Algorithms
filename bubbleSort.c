#include "sort.h"

int bubbleSort(int *arr, int arrSize);

int main() {
    int testArr[] = {5, 22, 10, 15, 26, 9, 8, 11, 100, 26, 250, 12, 64, 44, 18};
    int testArrSize = 15;

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