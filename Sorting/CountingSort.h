#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
        max = arr[i];
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min)
        min = arr[i];
    return min;
}

void countingSort(int arr[], int size) {
    int max = findMax(arr, size);
    int min = findMin(arr, size);
    int range = max - min + 1;
    int count[range] = { 0 };
    int output[size] = { 0 };

    for (int i = 0; i < size; i++) {
        count[arr[i] - min]++;
    }

    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    for (int i = 0; i < size; i++) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}
