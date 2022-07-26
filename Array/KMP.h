#include <iostream>
#include <string>
using namespace std;

void computeLPSArray(string pattern, int lps[]) {
  lps[0] = 0;
  int len = 0;
  int i = 1;

  while (i < pattern.size()) {
    if (pattern[i] == pattern[len]) {
      len++;
      lps[i] = len;
      i++;
    } else {
      if (len == 0) {
        lps[i] = 0;
        i++;
      } else {
        len = lps[len - 1];
      }
    }
  }

  // cout << "LPS Array:";
  // for (int i = 0; i < pattern.size(); i++) {
  //     cout << lps[i] << " ";
  // }
  // cout << endl;
}

void KMPSearch(string text, string pattern) {

  int lps[pattern.size()];

  computeLPSArray(pattern, lps);

  int i = 0;
  int j = 0;

  while (i < text.size()) {
    if (text[i] == pattern[j]) {
      i++;
      j++;
    }

    if (j == pattern.size()) {
      cout << "Found pattern at index : " + to_string(i - j) << endl;
      j = lps[j - 1];
    }

    if (text[i] != pattern[j]) {
      if (j == 0) {
        i++;
      } else {
        j = lps[j - 1];
      }
    }
  }
}