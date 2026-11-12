#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long
#define mod 1000000007
const int N = 1e3 + 3;
int k;
int dp[N]{};
int pre[N]{};

// F(x) : Number of Ways to eat x flowers.
// F(x) = F(x-1) + F(x-k) (Make sure x-k>=0)
// F(0) = 1
// dp[x] = F(x)
// Computations : Number of Unique States * Transition Time :
// 10^5*1 = ~10^5
// 10^5*10^5
// dp[x] : Total ways to eat x flowers.
// pre[x] : Total ways to eat flowers from 1 to x.

int F(int x) {
  // Stopping Point :
  if (x == 0) {
    return 1; // You are returning this but not storing in dp array.
    // Even though you have returned a value dp[0] is still does not contain any
    // value.
  }

  // Current State : F(x)
  if (dp[x] != -1) {
    return dp[x];
  }

  int Op1 = F(x - 1) % mod;

  int Op2 = 0;
  if (x - k >= 0) {
    Op2 = F(x - k) % mod;
  }

  // Current State : F(x):
  int val = (Op1 % mod + Op2 % mod) % mod;

  return dp[x] = (val % mod);
}

int32_t main() {
  int t;
  cin >> t >> k;

  memset(dp, -1, sizeof(dp));
  F(4);
  // Now I have the entire DP array filled with values that
  // contains the total ways to eat the index number of flowers.

  // Now I build the prefix array for the respective dp array.

  // pre[0] = dp[0];
  // cout << dp[0] << endl;
  for (int i = 1; i < N; i++) {
    pre[i] = pre[i - 1] + dp[i];
    pre[i] %= mod;
  }

  for (int i = 1; i <= t; i++) {
    int a, b;
    cin >> a >> b;
    cout << pre[b] - pre[a - 1] << endl;
  }

  return 0;
}

// k==1
//  one flower : 2 (R) / (W)
//  k>1
//  one flower : 1 (R)

// Total number of ways to eat flowers from a range a to b =
//  sum of total ways to eat flower[a,b] = pre[b] - pre[a-1].
