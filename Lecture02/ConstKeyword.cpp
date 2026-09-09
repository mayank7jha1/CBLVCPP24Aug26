#include <iostream>
using namespace std;

int main() {

  // This is a normal variable whose scope is inside main or local to main.
  int x{100};

  // This is a constant variable whose value cannot be changed in the current
  // scope/Current box/ inside the main block.
  // It is compulsory whenever defining a constant variable to initialise it.
  // const int p;      // Not Allowed.

  
  const int y{100}; // These are read only variables/ blocks.
  cout << y << endl;
  // y++; // Not allowed.

  return 0;
}
