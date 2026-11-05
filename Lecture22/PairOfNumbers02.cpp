#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
int n;

// F(x,y) : Minimum Steps to reach 1,1 from x,y.
// F(x,y) = 1 + min(F(x-y,y),F(x,y-x));
// F(1,1);

// Computations : No of States * Transition Time
// ~ (2^n * 1)
int F(int x, int y) {
  // Current State : F(x,y) :
  // Stopping Point :
  if (x == 1 and y == 1) {
    // Current State : F(1,1) or F(1,1) = 0;
    return 0;
  }

  // Current State : F(x,y):
  int Op1 = INT_MAX, Op2 = INT_MAX;

  if (x - y > 0) {
    Op1 = 1 + F(x - y, y);
  }

  if (y - x > 0) {
    Op2 = 1 + F(x, y - x);
  }

  int val = min(Op1, Op2);
  return val;

  // int val01 = 1 + min(F(x + y, y), F(x, x + y));
  // return val01;
}

int main() {
  cin >> n;

  // Recursion from Start :
  //  Starting Point :

  int ans = INT_MAX; // Across all the paths my answer is stored in ans
                     // variable.
  for (int i = 1; i <= n - 1; i++) {
    int val = F(i, n - i);
    ans = min(ans, val);
  }

  cout << ans + 1 << endl;

  return 0;
}
