#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;

// F(x,y) : Minimum Operations to convert s[x,0] and t[y,0].
// F(-1,y) : y+1 and F(x,-1) : x+1
// dp[x][y] = F(x,y)
// Computations : No of Unique States * Transition Time :
// 501*501*const
// Kitna Space Lag raha hain: Space Complexity : 501*501

string s, t;
int dp[501][501]{};

int F(int x, int y) {
  // Stopping Point:
  // Current State : F(x,y):
  if (x == -1 and y >= 0) {
    // Current State : F(-1,y) : y+1
    return y + 1;
  }

  if (x >= 0 and y == -1) {
    // Current State : F(x,-1) : x+1
    return x + 1;
  }

  if (x == -1 and y == -1) {
    // Current State : F(-1,-1) : 0
    return 0;
  }

  // Check Before calculating:
  if (dp[x][y] != -1) {
    return dp[x][y];
  }

  // Current State : F(x,y):
  // Currently we are at the xth index in string s and t th index in string t.
  if (s[x] == t[y]) {
    int ans = F(x - 1, y - 1);
    return (dp[x][y] = ans);
  }

  // Current State: F(x,y):
  int Op1 = F(x, y - 1); // Inserting a character in string s after index x.
  int Op2 = F(x - 1, y); // Deleting a character in string s at index x.
  int Op3 =
      F(x - 1, y - 1); // Replacing the xth character with the yth character.

  // Current State : F(x,y):
  int ans = 1 + min({Op1, Op2, Op3});
  return (dp[x][y] = ans);
}

int minDistance(string word1, string word2) {
  s = word1;
  t = word2;
  int n = word1.length();
  int m = word2.length();

  memset(dp, -1, sizeof(dp));

  // Recursion From Back:
  // Starting Point:
  int ans = F(n - 1, m - 1);
  return ans;

  // Iterative Dp :
  // dp1[x][y] : F(x-1,y-1) : Minimum Operations to convert s[x-1,0] and
  // t[y-1,0].

  int dp1[501][501]{};
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= m; j++) {

      if (i == 0) {
        // dp[0][j] : Minimum Number of Steps to convert s[-1,0] and t[j-1,0].
        dp[i][j] = j;
      } else if (j == 0) {
        // dp[i][0] : Minimum Number of Steps to convert s[i-1,0] and t[-1,0].
        dp[i][j] = i;
      } else if (s[i - 1] == t[j - 1]) {
        // Current State : dp[x][y] = F(x-1,y-1)
        int ans = dp[i - 1][j - 1];
        dp[i][j] = ans;
      } else {
        // Current State : dp[x][y] = F(x-1,y-1)

        int Op1 = dp[i][j - 1];     // Insert
        int Op2 = dp[i - 1][j];     // Delete
        int Op3 = dp[i - 1][j - 1]; // Replace

        int ans = 1 + min({Op1, Op2, Op3});
        dp[i][j] = ans;
      }
    }
  }

  // Final answer : F(n-1,m-1) which is stored in dp[n][m]:
  return dp[n][m];
}

int main() {
  string s, t;
  cin >> s >> t;
  cout << minDistance(s, t) << endl;
  return 0;
}
