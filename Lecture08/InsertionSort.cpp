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

  // Idea : Put every element from 1st index till n-1 index to the sorted half.

  for (int i = 1; i < n; i++) {
    int ce = a[i];
    // Subtask : Put this current element to its correct position.
    // sorted region ka last element is i-1 index vala.
    int j = i - 1;
    // Compare and shift till you find the correct position of the ce.

    while (j >= 0 and a[j] > ce) {

      // Shift also: Current element of the sorted region i.e. a[j] ko
      // ek kadam aage.
      a[j + 1] = a[j];

      j--;
    }

    // Now I know the current position of the ce i.e j+1 index.
    a[j + 1] = ce;
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
