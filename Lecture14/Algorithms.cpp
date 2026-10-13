#include <algorithm>
#include <iostream>

using namespace std;

bool Compare(int x, int y) {
  if (x > y) {
    // x and y are at the correct position.
    return true;
  } else {
    // x and y are not at the correct position swap them.
    return false;
  }
}

int main() {

  // Stl Algorithms :
  cout << max(32, 19) << endl;
  cout << max(32, max(10, 19)) << endl;
  cout << max(19, max(2, max(23, 41))) << endl;

  //{}: List of elements: Internally it will be stored as vector.
  cout << max({3, 2, 1, 2, 4, 591, 1, 2, 3, 499, 192, 19, 34}) << endl;

  int x = 10, y = 9;
  swap(x, y);

  int a[]{6, 3, 2, 1, 4, 9, 8};
  // What will be the address of the first block of the array a?
  // a
  // What is the address of the last block of the array?
  // a+n-1
  int n = sizeof(a) / sizeof(int);

  // Compare is a comparator which will tell the compiler how you want to
  // compare "Every  Two Elements" of this array a while performing the sort
  // algorithm.

  sort(a, a + n, Compare);

  // reverse(a, a + n);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
