#include <climits>
#include <cstring>
#include <iostream>
using namespace std;



// Global Scope:

// Function Definition:
int Sum(int a, int b) {
  int ans = a + b;
  return ans;
}

int difference(int a, int b) {
  int ans = a - b; //-5
  return ans;      //-5
}

int main() {

  int a, b;
  cin >> a >> b;

  // Function Call:
  int x = Sum(10, 15);
  cout << x << endl;

  // Second Function Call:
  int ans = difference(a, b);
  cout << ans << endl;

  return 0;
}
