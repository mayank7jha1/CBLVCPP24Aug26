#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int target;
  cin >> target;

  // Motivation : Find all the pairs from this array whose sum is equal to
  // target. (Only dublicates by value are allowed).

  // Computations : (~n*n)
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] + a[j] == target) {
        cout << a[i] << " " << a[j] << endl;
      }
    }
  }

  return 0;
}
