#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    int maxIndex;
    for (int i = size - 1; i > 0; i--) {
        maxIndex = i;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }

}

// int main() {
//     int arr[] = { 1, 5, 9, 7, 5 ,3};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     selection_sort(arr, size);
//     show(arr, size);

//     return 0;
// }