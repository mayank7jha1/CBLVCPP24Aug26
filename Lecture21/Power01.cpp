#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
int x, y;

// F(t)   : Multiply x from t to y times.
// F(t)   : F(t+1) * x;
// F(y+1) : 1;

double F(int t) {
  // Current State : F(t):

  // Stopping Point:
  if (t == y + 2) {
    // Current State : F(y+1): Iska answer mujhe pata hain and hence I can just
    // directly return it.
    return (1.0 / x);
  }

  // Task and Next State:
  // Main apne current state  : F(t) iska answer store karne ke liye ek variable
  // val leraha hu and val ko return karne ka matlab hain F(t) ko return karna.
  double val = F(t + 1) * x;

  // Now I know the answer for the current State:
  return val;
}

int main() {
  cin >> x >> y;

  // Recusion From Start:
  // Starting Point:
  double ans = F(1);
  cout << ans;

  cout << endl << "-----------------------------" << endl;

  int val = 1;
  for (int i = y; i >= 1; i--) {
    val *= x;
  }
  cout << val;
  cout << endl << "-----------------------------" << endl;

  return 0;
}
