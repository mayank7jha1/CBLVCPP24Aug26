#include <iostream>
using namespace std;

// THis line runs are precomputation phase.
#define x 200

// Ideally you should not be able to change its value in global scope.
// Below line runs at compilation phase.
const int x = 100; // Now not allowed.

int main() {

  cout << 200 << endl;
  return 0;
}
