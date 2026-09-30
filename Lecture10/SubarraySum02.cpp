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

  int pre[n]{};
  pre[0] = a[0];

  for (int i = 1; i < n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }

  // Computations : n^2:

  //  Print all the subarrays from every starting point:
  for (int sp = 0; sp < n; sp++) {
    // For this current starting point print all the subarrays with
    //  this current starting point:

    for (int ep = sp; ep < n; ep++) {
      // Current Subarray is from [sp,ep]:
      // Current Task: Subarray Sum from sp to ep.
      // sum[sp,ep]:

      if (sp == 0) {
        cout << pre[ep] << endl;
      } else {
        cout << pre[ep] - pre[sp - 1] << endl;
      }
    }
  }
}
