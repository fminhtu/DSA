#include <iostream>
using namespace std;

int max_sum_of_sub_array(int arr[], int size) {
  int max_sum = INT32_MIN;
  int max_ending = 0;
  // int start = 0, end = 0, index = 0;

  for (int i = 0; i < size; i++) {
    max_ending += arr[i];

    if (max_sum < max_ending) {
      max_sum = max_ending;
      // start = index;
      // end = i;
    }

    if (max_ending < 0) {
      max_ending = 0;
      // index = i + 1;
    }
  }

  // cout << "Start: " << start << endl;
  // cout << "End: " << end << endl;

  return max_sum;
}