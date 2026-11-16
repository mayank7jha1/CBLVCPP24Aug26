#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// F(x,y) : length lcs in string s [x,n-1] and string t [y,m-1].
// F1(x,y) : length lcs in string s [0,x] and string t [0,y].
// Computations : No of Unique States * Transition Time:
// 1001*1001*1 = ~ 10^6 : This will work in 1 sec.

int F(int x, int y, string &s, string &t, int dp[1001][1001]) {
  // Current State:F(x,y):
  // Stopping Point:

  int n = s.length();
  int m = t.length();
  if (x > n - 1 or y > m - 1) {
    // Current State : F(n,something) or F(something,m) = 0.
    return 0;
  }

  // Current State: F(x,y):
  // Currently I am doing work for the xth index in s string and yth index in t
  // string.

  if (dp[x][y] != -1) {
    return dp[x][y];
  }

  if (s[x] == t[y]) {
    // Current State : F(x,y) and s[x] and t[y] are same.
    int ans = 1 + F(x + 1, y + 1, s, t, dp);
    return (dp[x][y] = ans);
  }

  // If I am here : s[x] and t[y] are not same.

  // We are saying t[y] cannot be part of the answer.
  int Op1 = F(x, y + 1, s, t, dp);

  // We are saying s[x] cannot be part of the answer.
  int Op2 = F(x + 1, y, s, t, dp);

  // Current State : F(x,y):
  int ans = max(Op1, Op2);

  return (dp[x][y] = ans);
}

int F1(int x, int y, string &s, string &t, int dp[1001][1001]) {
  // Current State:F(x,y):
  // Stopping Point:
  if (x < 0 or y < 0) {
    // Current State : F(-1,something) or F(something,-1) = 0.
    return 0;
  }

  // Current State: F(x,y):
  // Currently I am doing work for the xth index in s string and yth index in t
  // string.

  if (dp[x][y] != -1) {
    return dp[x][y];
  }

  if (s[x] == t[y]) {
    // Current State : F(x,y) and s[x] and t[y] are same.
    int ans = 1 + F1(x - 1, y - 1, s, t, dp);
    return (dp[x][y] = ans);
  }

  // If I am here : s[x] and t[y] are not same.

  // We are saying t[y] cannot be part of the answer.
  int Op1 = F1(x, y - 1, s, t, dp);

  // We are saying s[x] cannot be part of the answer.
  int Op2 = F1(x - 1, y, s, t, dp);

  // Current State : F(x,y):
  int ans = max(Op1, Op2);

  return (dp[x][y] = ans);
}

int longestCommonSubsequence(string s, string t) {
  // Recursion From Front:
  // Starting Point:
  // int ans = F(0, 0, s, t);
  // return ans;

  int n = s.length();
  int m = t.length();
  int dp[1001][1001]{};

  memset(dp, -1, sizeof(dp));

  // Recursion From back:
  // Starting Point:
  int ans2 = F1(n - 1, m - 1, s, t, dp);
  return ans2;

  // Iterative DP : From the front:
  int dp2[1001][1001]{};

  // State Definition : dp[x][y] = F(x-1,y-1) : lcs in string s from [0,x-1] and
  // string t from [0,y-1].

  for (int x = 1; x <= n; x++) {
    for (int y = 1; y <= m; y++) {

      // Current State : dp[x][y] : F(x-1,y-1) :
      if (s[x - 1] == t[y - 1]) {
        // Current State : dp[x][y] = F(x-1,y-1)
        int ans = 1 + dp[x - 1][y - 1];

        dp[x][y] = ans;
        continue;
      }

      // Current State : dp[x][y] = F(x-1,y-1) where s[x-1] and t[y-1] are not
      // equal.

      // We are not taking t[y-1] character in my answer.
      int Op1 = dp[x][y - 1];

      // We are not taking s[x-1] character in my answer.
      int Op2 = dp[x][y - 1];

      // Current State : dp[x][y] = F(x-1,y-1):
      int ans = max(Op1, Op2);

      dp[x][y] = ans;
    }
  }

  // Final answer : F(n-1,m-1) : this is stored in dp[n][m].
  cout << dp[n][m] << endl;
}

int main() {
  string s, t;
  cin >> s >> t;

  int ans = longestCommonSubsequence(s, t);
  cout << ans << endl;

  return 0;
}
