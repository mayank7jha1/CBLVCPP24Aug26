#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int maxi = INT_MIN;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (maxi < a[i]) {
      maxi = a[i];
    }
  }

  // Freq array me i : Represents the element of the orginal array.
  // Freq array me freq[i] : Represents the freq of the element int the original
  // array.

  int freq[maxi + 1]{};
  // We are iterating over the original array.
  for (int i = 0; i < n; i++) {
    int ce = a[i];
    freq[ce]++;
  }

  // We are iterating over the freq array:
  for (int i = 0; i < maxi + 1; i++) {
    if (freq[i] > 0) {
      cout << i << " " << freq[i] << endl;
    }
  }

  return 0;
}
