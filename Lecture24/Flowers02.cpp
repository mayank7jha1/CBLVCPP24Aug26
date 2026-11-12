#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long
#define mod 1000000007
const int N = 1e5 + 3;
int k;
int dp[N]{};

// F(x) : Number of Ways to eat x flowers.
// F(x) = F(x-1) + F(x-k) (Make sure x-k>=0)
// F(0) = 1
// dp[x] = F(x)
// Computations : Number of Unique States * Transition Time :
// 10^5*1 = ~10^5
// 10^5*10^5

int F(int x) {
  // Stopping Point :
  if (x == 0) {
    return 1;
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

  for (int i = 1; i <= t; i++) {
    int a, b;
    cin >> a >> b;

    int ans = 0;
    for (int j = a; j <= b; j++) {
      ans += F(j);
      ans %= mod;
    }

    cout << ans << endl;
  }

  return 0;
}

// k==1
//  one flower : 2 (R) / (W)
//  k>1
//  one flower : 1 (R)

// Total number of ways to eat flowers from a range a to b =
//  sum of total ways to eat flower[a,b] = pre[b] - pre[a-1].
