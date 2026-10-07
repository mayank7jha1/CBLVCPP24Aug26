#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int n, k;
  cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Idea:Go to everyIndex and treat the current index as the starting point and
  // with respect to this starting point find the sum of the subarray of k
  // length.

  // Computations: n*k :
  int ans = INT_MIN; // Across all the subarrays it will store the answer.
  for (int sp = 0; sp <= n - k; sp++) {
    int sum = 0;
    for (int ep = sp; ep < sp + k; ep++) {
      sum += a[ep];
    }

    ans = max(ans, sum);
  }

  cout << ans << endl;

  // Optimised Approach:
  // Observation: If You have the sum of one window/Subarray, you don't need to
  // compute the entire common region sum again for the next subarray/window.

  // Computation : 2*n:
  // Current Window Length: ep-sp:
  // Current Window me Number of Elements : ep-sp+1

  //  Current Window Marker:
  int sp = 0, ep = 0;
  int sum = 0; // THis will store the sum  of the current window.
  int ans02 = INT_MIN;

  // Expand till you Can:
  for (; ep < n; ep++) {
    // Task :
    sum += a[ep];

    // Shrink If you are in Undesired Window:
    while ((sp <= ep) and ((ep - sp) >= k)) {
      sum -= a[sp];
      sp++;
    }

    // Updation : Only when window is of k length.
    if (ep - sp + 1 == k) {
      ans02 = max(sum, ans02);
    }
  }

  cout << ans02 << endl;

  return 0;
}
