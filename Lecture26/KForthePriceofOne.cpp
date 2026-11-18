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
int dp[N]{};

int F(int x) {
  // Stopping Point :
  if (x == 0) {
    // Tshirt ki numbering are from 1 to n and if you are at the 0th index that
    // means no t-shirt.
    return 0;
  }

  // Current State : F(x):
  if (dp[x] != -1) {
    return dp[x];
  }

  if (x < k) {
    // I am not able to apply the offer till now.
    int ans = price[x] + F(x - 1);
    return dp[x] = ans;
  }

  if (x == k) {
    // We are able to apply the offer for the very first time.
    int ans = price[x];
    return dp[x] = ans;
  }

  int ans = price[x] + F(x - k);
  return dp[x] = ans;
}

int Solve() {

  memset(dp, -1, sizeof(dp));

  // Maximum amount of t-shirts:
  int ans = 0;

  // Maine har t-shirt tak ko buy karne ka price nikal liya hain now I am
  // iterating over the that and If the amount to buy t-shirts upto the current
  // t-shirt is less than the amount of I have then I will be able to buy those
  // t-shirts.

  for (int i = 1; i <= n; i++) {
    if (F(i) <= p) {
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
