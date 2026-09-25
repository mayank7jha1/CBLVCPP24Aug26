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

  // This will store the maximum sum across all the subarrays.
  int maxi = INT_MIN;

  // Print all the subarrays from every starting point:
  for (int sp = 0; sp < n; sp++) {
    // For this current starting point print all the subarrays with
    //  this current starting point:

    for (int ep = sp; ep < n; ep++) {
      // Current Subarray is from [sp,ep]:

      // Find the sum of the current subarray and print the sum of the current
      // subarray.

      // har new subarray ke liye sum should again zero se start.
      int sum = 0; // Current subarray ka sum:

      //  Go to every element of the current subarray and find its sum and then
      //  print the sum.
      for (int k = sp; k <= ep; k++) {
        sum += a[k];
      }

      // Current Subarray that stats from sp index to ep index is sum.
      // Update the abtak ka maximum subarray sum by comparing maxi with current
      // subarray sum.

      if (maxi < sum) {
        maxi = sum;
      }
    }
  }

  cout << maxi << endl;
}
