#include <iostream>
using namespace std;

#define NO_OF_CHAR 256

void bad_char_heuristic(int badchar[], string pattern) {
  for (int i = 0; i < pattern.size(); i++) {
    badchar[(int)pattern[i]] = i;
  }
}

void boyer_moore(string text, string pattern) {
  int bad_char[NO_OF_CHAR] = {-1};
  bad_char_heuristic(bad_char, pattern);

  int i = 0;
  int j = 0;
  int n = text.size();
  int m = pattern.size();

  while (i <= n - m) {
    j = m - 1;
    while (j >= 0 && pattern[j] == text[i + j]) {
      j--;
    }

    if (j < 0) {
      cout << "Found pattern at index : " + to_string(i) << endl;
      i += (i < n - m) ? m - bad_char[text[i + m]] : 1;
    } else {
      i += max(1, j - bad_char[text[i + j]]);
    }
  }

  int var = 10;
}
