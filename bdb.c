#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void printSortedWrappedFromIndex(int arr[], int size, int startIndex) {
    insertionSort(arr, size);

    printf("Sorted Array (wrapped) from index %d: ", startIndex);
    for (int i = startIndex; i < size; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < startIndex; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int originalArray[] = {9, 3, 7, 1, 5};
    int size = sizeof(originalArray) / sizeof(originalArray[0]);
    int givenIndex = 2;
    printSortedWrappedFromIndex(originalArray, size, givenIndex);

    return 0;
}
