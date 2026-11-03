#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
int x, y;

int F(int t) {
  if (t == y + 1) {
    return 1;
  }

  int val = F(t + 1) * x;
  return val;
}

int main() {
  cin >> x >> y;

  int ans = F(1);
  cout << ans;

  return 0;
}
