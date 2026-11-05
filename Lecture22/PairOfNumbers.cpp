#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
int n;

// F(x,y) : Minimum Steps to reach F(n,_) or F(_,n) from x,y.
// F(x,y) = 1 + min(F(x+y,y),F(x,x+y));
// F(x,n) = 0 or F(n,y) = 0;

// Computations : No of States * Transition Time
// ~ (2^n * 1)
int F(int x, int y) {
  // Current State : F(x,y) :
  // Stopping Point :
  if (x == n or y == n) {
    // Current State : F(x,n) or F(n,y) = 0;
    return 0;
  }

  if (x > n or y > n) {
    // This is an invalid path and I want to return something that can never
    // become the answer.
    return 1e8;
  }

  // Current State : F(x,y):
  int Op1 = 1 + F(x + y, y);
  int Op2 = 1 + F(x, x + y);

  int val = min(Op1, Op2);
  return val;

  // int val01 = 1 + min(F(x + y, y), F(x, x + y));
  // return val01;
}

int main() {
  cin >> n;

  // Recursion from Start :
  //  Starting Point :

  int ans = F(1, 1);
  cout << ans << endl;

  return 0;
}
