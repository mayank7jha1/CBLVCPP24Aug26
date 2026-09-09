#include <iostream>
using namespace std;

int main() {

  // Variable Definition and Initialisation:
  int x{10};

  // Currently I only have a single main box:
  // I cannot redefine this variable x inside this main box.

  // int x{20};//Not Allowed.

  // Re-assignment is allowed.
  x = 20;

  return 0;
}
