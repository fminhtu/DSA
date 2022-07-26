#include <iostream>
using namespace std;

int qs_partition(int arr[], int left, int right) {
  int i = left;
  for (int j = left; j < right; j++) {
    if (arr[j] <= arr[right]) {
      swap(arr[i], arr[j]);
      i++;
    }
  }

  swap(arr[i], arr[right]);

  return i;
}

int kthSmallest(int arr[], int left, int right, int k) {
  if (k > 0 && k <= right - left + 1) {
    int index = qs_partition(arr, left, right);

    if (index - left == k - 1) {
      return arr[index];
    }

    else if (index - left > k - 1) {
      return kthSmallest(arr, left, index - 1, k);
    }

    else if (index - left < k - 1) {
      return kthSmallest(arr, index + 1, right, k - (index + 1 - left));
    }
  }

  return INT32_MAX;
}