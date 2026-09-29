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
  // target. (All kinds of dublicates are allowed (Value and Index Both)).

  for (int fei = 0; fei < n; fei++) {
    // First Element of the pair is  : a[fei]:
    // SubIdea: For this current element or the first element of the pair
    // try to find the second element in the entire array.

    int fe = a[fei];
    int key = target - fe;

    for (int sei = 0; sei < n; sei++) {
      if (fei != sei and a[sei] == key) {
        // You have found a pair whose sum is now equal to target.
        cout << a[fei] << " " << a[sei] << endl;
      }
    }
  }

  cout << endl << "---------------------------" << endl;

  // Computations : ~n*n
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j and a[i] + a[j] == target) {
        cout << a[i] << " " << a[j] << endl;
      }
    }
  }

  return 0;
}
