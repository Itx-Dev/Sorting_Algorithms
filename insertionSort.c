#include "sort.h"

int insertionSort(int *arr, int arrSize);

int main() {
    insertionSort(testArr, testArrSize);
    printArray(testArr, testArrSize);
    return 0;
}

int insertionSort(int *arr, int arrSize) {
    int compareIndex;
    for (int selectedIndex = 1; selectedIndex < arrSize; selectedIndex++) {
        compareIndex = selectedIndex;
        while (compareIndex > 0 && arr[compareIndex - 1] > arr[compareIndex]) {
            swap(&arr[compareIndex], &arr[compareIndex - 1]);
            compareIndex--;
        }
    }
}