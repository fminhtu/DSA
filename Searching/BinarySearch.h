#include<iostream>

using namespace std;


int binarySearch(int value, int array[], int size){
    int left, mid, right;
    left = 0, right = size - 1;

    while (left <= right) {
        mid = (left + right) / 2;

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            left = mid + 1;

        if (array[mid] > value)
            right = mid - 1;
    };

    return -1;
}

