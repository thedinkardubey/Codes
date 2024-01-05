#include<stdio.h>

void printArr(int* arr, int size) {
    printf("[");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int lb, int ub) {
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end) {
        while (arr[start] <= pivot) {
            start++;
        }
        while (arr[end] > pivot) {
            end--;
        }
        if (start < end) {
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[lb], &arr[end]);
    return end;
}

void quickSort(int *arr, int lb, int ub) {
    if (lb < ub) {
        int loc = partition(arr, lb, ub);
        quickSort(arr, lb, loc - 1);
        quickSort(arr, loc + 1, ub);  // Fix: Use loc + 1 instead of loc - 1
    }
}

int main() {
    int arr[] = {3, 4, 2, 9, 7, 5, 8};
    int size = sizeof(arr) / sizeof(int);
    int lb = 0, ub = size - 1;  // Initialize lb and ub
    printf("Array before Sorting:\n");
    printArr(arr, size);
    quickSort(arr, lb, ub);
    printf("Array after Sorting:\n");
    printArr(arr, size);
    return 0;
}
