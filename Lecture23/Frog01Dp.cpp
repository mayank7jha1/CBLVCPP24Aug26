#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e5 + 3;

int n;
int height[N]{};
int dp[N]{};

// F(x) : Minimum Cost from xth stone to nth stone.
// F(x) = min(Op1,Op2);
// Op1 = abs(height[x]-height[x+1]) + F(x+1);
// Op2 = abs(height[x]-height[x+2]) + F(x+2);
// F(n) = 0;
// dp[x] = F(x) ;
// Computations : No of Unique States * Transition Time
// Computations : 10^5 * constant  : ~10^5
// Recursion + Memoisation : Top Down DP:

int F(int x) {
  // Current State : F(x):
  // Base Condition :
  // Stopping Point:
  if (x == n) {
    // Current State : F(n) = 0;
    return 0;
  }

  if (x > n) {
    // Current State : F(Anything greater than n) : A very large value that can
    // never be the answer.
    return 1e8;
  }

  // Current State : F(x):
  if (dp[x] != -1) {
    // This is a repeated State :
    // You don't need to compute this state again.
    return dp[x];
  }

  // From the current Stone you take a jump of 1 step and then try to find the
  // minimum from the x+1th stone.
  int Op1 = abs(height[x] - height[x + 1]) + F(x + 1);

  // From the current Stone you take a jump of 2 step and then try to find the
  // minimum from the x+2th stone.
  int Op2 = abs(height[x] - height[x + 2]) + F(x + 2);

  // Current State : F(x):
  int val = min(Op1, Op2);

  // Return the answer for the current state: F(x)
  return (dp[x] = val);
}

int F1(int x) {
  // Current State : F(x):
  // Base Condition :
  // Stopping Point:
  if (x == n) {
    // Current State : F(n) = 0;
    return 0;
  }

  // Why are you even going to a stone that can never contribute to your answer.

  // Current State : F(x):
  if (dp[x] != -1) {
    // This is a repeated State :
    // You don't need to compute this state again.
    return dp[x];
  }

  // From the current Stone you take a jump of 1 step and then try to find the
  // minimum from the x+1th stone.
  int Op1 = abs(height[x] - height[x + 1]) + F1(x + 1);

  // From the current Stone you take a jump of 2 step and then try to find the
  // minimum from the x+2th stone.
  int Op2 = INT_MAX;

  // Agar 2 step ka jump lepaana possible hain from the xth stone tabhi lena
  // varna Op2 by default will be INT_MAX as we need to take the min for F(x)
  // calculation.
  if (x + 2 <= n) {
    Op2 = abs(height[x] - height[x + 2]) + F1(x + 2);
  }

  // Current State : F(x):
  int val = min(Op1, Op2);

  // Return the answer for the current state:
  return (dp[x] = val);
}

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> height[i];
  }

  // Initialise DP array with a value that can never be the answer:
  // for (int i = 0; i < N; i++) {
  //   dp[i] = -1;
  // }

  // C++ Me aapke pass ek function hain memset : This helps you to initialise
  // the container with values -1,0,1.
  memset(dp, -1, sizeof(dp));

  // Recursion from Start:
  //  Starting Point :
  int ans = F(1);
  cout << ans << endl;

  cout << "------------------------------------" << endl;

  memset(dp, -1, sizeof(dp));
  int ans01 = F1(1);
  cout << ans01 << endl;

  return 0;
}
