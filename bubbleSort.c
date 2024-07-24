#include "sort.h"

int bubbleSort(int *arr, int arrSize);

int main() {
    bubbleSort(testArr, testArrSize);
    printArray(testArr, testArrSize);
    return 0;
}

int bubbleSort(int *arr, int arrSize) {
    for (int firstElement = 0; firstElement < arrSize; firstElement++) {
        for (int secondElement = 0; secondElement < arrSize; secondElement++) {
            if (arr[firstElement] < arr[secondElement]) {
                swap(&arr[firstElement], &arr[secondElement]);
            }
        }
    }
}