#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long
#define mod 1000000007
const int N = 1e5 + 3;
int a[101]{};
int dp[101][N]{};

// F(x,y) : Number of ways to distribute y candies amoung x child.
// F(x,y) = F(x-1,y-0) + F(x-1,y-1) + F(x-1,y-2) + .......
// F(1,y) = 1 when y<=a[1] and 0 when y > a[1].
// (a+b) % mod = (a%mod + b%mod)%mod
// Computations : No of Unique states * Transition Time :
// (101*10^5)* 10^5
// ~ (10^12)

int F(int x, int y) {
  // Current State : F(x,y):
  // Stopping Point :
  if (x == 1) {
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

  int val = 0;
  // We are talking about xth child :
  int MaximumCandyCurrentChildCanhave = min(a[x], y);

  for (int i = 0; i <= MaximumCandyCurrentChildCanhave; i++) {
    // xth child ke liye aap kaam kar rahe ho:
    val += (F(x - 1, y - i) % mod);
    val %= mod;
  }

  // Current State : F(x,y) : Jiska answer mujhe ab pata hain:
  // Vo answer val ke ander stored hain:

  return (dp[x][y] = (val % mod));
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
