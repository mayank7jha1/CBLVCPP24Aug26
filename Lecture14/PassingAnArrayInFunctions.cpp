#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Array Jo Static Memory me defined hain will always
//  be passed by address.
// b is a pointer variable local to Solve and
// x is a variable local to solve.
// B stores the address of a and x stores the value of n.
// As soon as we move out of Solve all the definitions defined in
// Solve will no longer be in memory.

void Solve(int b[], int x) {
  cout << b << endl;
  x = 1000;
  cout << *(b + 1) << endl; //---->3
  cout << b[1] << endl;     //[ ]: Value of

  // return;

  b[3] = 100; //*(b+3)=100;

  for (int i = 0; i < x; i++) {
    cout << b[i] << " ";
  }
}

void Solve01(int *b, int x) {
  cout << b << endl;
  cout << *(b + 1) << endl; //---->3
  cout << b[1] << endl;     //[ ]: Value of
  for (int i = 0; i < x; i++) {
    cout << b[i] << " ";
  }
}

int main() {
  int a[]{2, 3, 1, 6, 8};
  int n = sizeof(a) / sizeof(int);
  Solve(a, n);

  cout << a << " " << n << endl;

  return 0;
}
