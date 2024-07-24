#include "sort.h"

int selectionSort(int *arr, int arrSize);

int main() {
    selectionSort(testArr, testArrSize);
    printArray(testArr, testArrSize);
    return 0;
}

int selectionSort(int *arr, int arrSize) {
    int largestVal = 0;

    for (int firstElement = 0; firstElement < arrSize; firstElement++) {
        for (int secondElement = 0; secondElement < arrSize; secondElement++) {
            if (arr[firstElement] < arr[secondElement]) {
                swap(&arr[firstElement], &arr[secondElement]);
            }
        }
    }

    

}