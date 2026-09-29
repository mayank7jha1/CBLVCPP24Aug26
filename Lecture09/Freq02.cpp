#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int maxi = INT_MIN;
  int mini = INT_MAX;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (maxi < a[i]) {
      maxi = a[i];
    }
    if (mini > a[i]) {
      mini = a[i];
    }
  }

  // Computations : ~ maxi-mini+1
  int freq[maxi - mini + 1]{};

  // We are iterating over the original array and building the freq array on the
  // shifted scale.
  for (int i = 0; i < n; i++) {
    int os = a[i];
    int ss = os - mini; // Relation:
    freq[ss]++;
  }

  // We are iterating over the freq array and Printing the element and its freq
  // according to the original scale.
  for (int i = 0; i < maxi - mini + 1; i++) {
    if (freq[i] > 0) {
      // i : Original Element in shifted scale:
      // But you need to print the original element in original scale.
      cout << (i + mini) << " " << freq[i] << endl;
    }
  }

  return 0;
}
