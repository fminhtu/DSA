#include <iostream>
using namespace std;


void insertion_sort(int arr[], int size) {
    int i, j, k;

    for (i = 1; i < size; i++) {
        j = i - 1;
        k = arr[i];
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }
}

