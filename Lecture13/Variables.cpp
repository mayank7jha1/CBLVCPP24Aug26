#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int x{10};      // Normal Variable
  int *xptr = &x; // Pointer variable
  int &y = x;     // y is a reference variable

  // Now in this box x and y are reference of each other.
  y = 500;
  cout << x << endl;

  return 0;
}
