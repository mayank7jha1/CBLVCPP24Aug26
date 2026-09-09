#include <iostream>
using namespace std;

int main() {

  int x{10};

  if (true) {

    // Redefinition but inside a seperate box.
    int x{20}; // Now this is allowed as this is not inside the main box but
               // inside the if box.
  }

  return 0;
}
