
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  // Starting Point:
  int i = 1, j = 1;

  // Stopping Point:
  while (i <= n and j <= n) {

    // Task:
    cout << i << " ";

    // Next State :
    i += 10;
    j = j * 2;
  }

  cout << endl << i << endl;
  cout << endl << "------------------------" << endl;

  // for (int j = 1; j <= n; j++) {
  //   cout << j << " ";
  // }

  // int j = 10;

  // for (j = 1; j <= n; j++) {
  //   cout << j << " ";
  // }

  // int i;

  // for (i = 1; i <= n; i++) {
  //   cout << i << " ";
  // }

  // cout << endl << i << endl;

  double d = 1.2;

  for (int i = 1, j = 1; (i <= n and i <= j and j <= n); i += 10, j = j * 2) {
    cout << i << " ";
  }

  // Starting Point:
  int m = 1, z = 1;

  // Stopping Point:
  for (; (m <= n and n <= 10);) {

    // Task:
    cout << m << " ";

    // Next State:
    m++;
    n = n * 10;
  }

  cout << endl << "------------------------" << endl;

  return 0;
}
