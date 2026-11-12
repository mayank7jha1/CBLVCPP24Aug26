#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long
#define mod 1000000007
const int N = 1e5 + 3;
int a[101]{};
int dp[101][N]{};

int F(int x, int y) {
  if (x == 1) {
    if (y <= a[1]) {
      return 1;
    } else {
      return 0;
    }
  }


  if (dp[x][y] != -1) {
    return dp[x][y];
  }

  // F(5,0) : 0
  int Part01 = 0;
  if (y - 1 >= 0) {
    Part01 = F(x, y - 1) % mod;
  }
  int Part02 = F(x - 1, y) % mod;
  int Part03 = 0;

  if (y - a[x] - 1 >= 0) {
    Part03 = F(x - 1, y - a[x] - 1) % mod;
  }

  int val = ((Part01) + (Part02) - (Part03) + mod) % mod;

  // int val = Part01 + Part02 - Part03;
  return (dp[x][y] = val);
}

int32_t main() {
  int n, k;
  cin >> n >> k;

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  memset(dp, -1, sizeof(dp));

  int ans = F(n, k);
  cout << ans % mod << endl;

  return 0;
}
