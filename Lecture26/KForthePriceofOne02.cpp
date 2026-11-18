#include <algorithm>
#include <climits>
#include <cstdint>
#include <cstring>
#include <iostream>

using namespace std;
#define int long long
const int N = 2e5 + 3;
int t;
int n, p, k;
int price[N]{};

// F(x) : Minimum Cost to buy t-shirts from 1 to x.
// dp[x] = F(x)
// COmputations : ((2e5*const)*2e5Log(2e5))*10^4 = ~10^9
// Space : 2e5
int dp[N]{};

int Solve() {

  // dp[x] : Minimum amount required to buy t-shirts upto xth t-shirt.
  dp[0] = 0;

  for (int x = 1; x <= n; x++) {
    // Current State : dp[x]:
    if (x < k) {
      dp[x] = price[x] + dp[x - 1];
    } else if (x == k) {
      dp[x] = price[x];
    } else {
      dp[x] = price[x] + dp[x - k];
    }
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (dp[i] <= p) {
      // Main ith t-shirt tak saari t-shirt buy kar sakta hu.
      ans = i;
    }
  }

  return ans;
}

int32_t main() {
  cin >> t;

  while (t--) {
    cin >> n >> p >> k;
    for (int i = 1; i <= n; i++) {
      cin >> price[i];
    }

    // 1-Based Indexing and We need to sort this array of price because we
    //  want to apply the offer on the cheaper t-shirts first.
    sort(price + 1, price + n + 1);

    cout << Solve() << endl;
  }

  return 0;
}
