#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }

}

void heapSort(int arr[], int size) {
    //build heap
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }
    //swap & heapify
    for (int i = size - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}