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

  // Print all the subarrays from every starting point:
  for (int sp = 0; sp < n; sp++) {
    // For this current starting point print all the subarrays with
    //  this current starting point:

    for (int ep = sp; ep < n; ep++) {
      // Current Subarray is from [sp,ep]:

      // Print all the elements of this subarray from sp index to ep index.
      for (int k = sp; k <= ep; k++) {
        cout << a[k] << " ";
      }

      cout << endl;
    }
    cout << endl;
  }
}
