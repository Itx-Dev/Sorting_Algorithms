#include "sort.h"

int selectionSort(int *arr, int arrSize);

int main() {
    selectionSort(testArr, testArrSize);
    printArray(testArr, testArrSize);
    return 0;
}

int selectionSort(int *arr, int arrSize) {
    int index = 0;

    while (index < arrSize) {
        int smallestVal = arr[index];
        int smallestIndex = index;
        for (int i = index; i < arrSize; i++) {
            if (arr[i] < smallestVal) { 
                smallestVal = arr[i]; 
                smallestIndex = i;
            }
        }

        swap(&arr[index], &arr[smallestIndex]);
        index++;
    }
}