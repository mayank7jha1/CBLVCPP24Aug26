#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long
#define mod 1000000007
const int N = 1e3 + 3;
int a[101]{};
int dp[101][N]{};

// F(x,y) : Number of ways to distribute y candies amoung x child.
// F(x,y) = F(x-1,y-0) + F(x-1,y-1) + F(x-1,y-2) + .......
// F(1,y) = 1 when y<=a[1] and 0 when y > a[1].
// (a-b) % mod = (a%mod- b%mod + mod)%mod
// Computations : No of Unique states * Transition Time :
// (101*10^5)* 1
// ~ (10^7)

int F(int x, int y) {
  // Current State : F(x,y):
  // Stopping Point :
  if (x <= 1) {
    if (y <= a[1]) {
      // Current State : F(1,somwthing which is less than a[1]) = 1
      return 1;
    } else {
      // y > a[1]:
      return 0;
    }
  }

  // Current State : F(x,y) : F(x-1,y-0) + F(x-1,y-1) + ......
  if (dp[x][y] != -1) {
    return dp[x][y];
  }

  // Current State : F(x,y) :
  //  You are talking about the xth child :
  //  Aap xth child ko kuch number of candies doge and baaki kaam recursion se
  //  karvaoge.

  // F(x,y) se pehle pakka maine F(x,y-1) nikala hoga.
  // Main Current State ko Previously Calculated state ki maddad se likhta hu.

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

  // Now I have the answer the current State :
  return (dp[x][y] = val);
}

int32_t main() {
  int n, k;
  cin >> n >> k;

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  memset(dp, -1, sizeof(dp));

  // Recursion From Back:
  // Starting Point :
  int ans = F(n, k);
  cout << ans % mod << endl;

  return 0;
}
