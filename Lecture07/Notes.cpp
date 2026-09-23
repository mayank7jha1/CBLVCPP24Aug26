#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int a[n + 2]{};

  for (int i = 2; i < n + 2; i++) {
    cin >> a[i];
  }

  // These below are blocks in which I will not do anything.
  a[0] = 0;
  a[1] = 0;

  // I am taking the values from the user and storing them from the index
  //  2.
  a[2] = 4;
  a[3] = 3;
  a[4] = 2;
  a[5] = 1;
  a[6] = 9;

  return 0;
}
