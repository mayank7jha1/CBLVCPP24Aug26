#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n, tt;
  cin >> n >> tt;

  int a[n + 1]{};
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  // Sliding Window:
  // Computation : 2*n:
  int sp = 0, ep = 0;
  int tc = 0;
  int ans = INT_MIN;

  // Expansion till you can from the end:
  for (; ep < n; ep++) {
    // Task:
    tc += a[ep];

    // Shrinking If you are in Undesired window:
    while (sp <= ep and tc > tt) {
      tc -= a[sp];
      sp++;
    }

    // No of books in my current Window : Window Elements : ep-sp+1

    // Updation:
    ans = max(ans, ep - sp + 1);
  }

  cout << ans << endl;
}
