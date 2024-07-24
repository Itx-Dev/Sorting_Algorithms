#include "sort.h"

int insertionSort(int *arr, int arrSize);

int main() {
    insertionSort(testArr, testArrSize);
    printArray(testArr, testArrSize);
    return 0;
}

int insertionSort(int *arr, int arrSize) {
    int selectedIndex = 1;
    int compareIndex;
    while (selectedIndex < arrSize) {
        compareIndex = selectedIndex;
        while (compareIndex > 0 && arr[compareIndex - 1] > arr[compareIndex]) {
            swap(&arr[compareIndex], &arr[compareIndex - 1]);
            compareIndex--;
        }
        selectedIndex++;
    }
}