#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  int a[n + 1]{};
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  // Computations : n*q: 4*10^10
  //   for (int i = 1; i <= q; i++) {
  //     // Current Query is i:
  //     int l, r;
  //     cin >> l >> r;
  //     // This is Fetch Query Type:
  //     //  Idea: for this current query find the sum of array from l to r
  //     index. int sum = 0; for (int j = l; j <= r; j++) {
  //       sum += a[j];
  //     }
  //
  //     cout << sum << endl;
  //   }
  //
  //   cout << endl << "---------------------------------" << endl;
  // Optimised Approach:

  // Precomputations :

  //Overall Computations : ~n+q : 2*10^5+2*10^5 = ~4*10^5
  
  // Computations : ~n
  int pre[n + 1]{};
  for (int i = 1; i <= n; i++) {
    pre[i] = pre[i - 1] + a[i];
  }

  // Computations : ~q
  for (int i = 1; i <= q; i++) {
    int l, r;
    cin >> l >> r;

    // Current Query: Find the sum of the array from l to r.
    cout << pre[r] - pre[l - 1] << endl;
  }

  return 0;
}
