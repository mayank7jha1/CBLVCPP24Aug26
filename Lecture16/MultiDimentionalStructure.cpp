#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;

// This is one way:
// Personally I don't prefer this:
void Solve01(int *c, int n, int m) {}

// This is not Allowed as n and m are variables here.
// void Solve02(int n, int m, c[n][m]) {}

// This is Method02:
void Solve02(int c[2][3]) {}

// This is Method03:
const int n = 2;
const int m = 3;

void Solve03(int c[n][m]) {

  for (int i = 0; i < n; i++) {
    int sum = 0; // Stores the sum of each row:
    for (int j = 0; j < m; j++) {
      sum += c[i][j];
    }
    cout << sum << endl;
  }

  return;
}

int main() {

  int a[2][3]{
      {1, 2, 5},
      {3, 2},
  };

  Solve01((int *)a, 2, 3);

  // Numeric Array:
  //  Sort(a, a + n); This will make no sense.

  // This is allowed:
  sort(a[0], a[0] + m);

  return 0;
}
