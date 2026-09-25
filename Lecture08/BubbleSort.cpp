#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Idea : For every task find the maximum element in the respective range and
  // put that element to its correct position.

  // Task i : Find the maximum in range 0 to n-1-i and put that maximum element
  // to its correct position.

  for (int i = 0; i < n - 1; i++) {
    // Current Task i :
    // Find maximum in range i to n-i-1 and put that element to its correct
    // position.

    for (int j = 0; j < n - i - 1; j++) {

      // n=5, i=0, [0,4] maximum hume 0 se 4 tak ke bich me nikalna hain par
      // uske uske current element ko uske adjacent se compare kitni bar karna
      // padega 4 times.

      if (a[j] > a[j + 1]) {
        // Swap them:
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
