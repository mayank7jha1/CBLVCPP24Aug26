#include <iostream>
using namespace std;

int main() {

  // Starting Point:
  int x = 1;

  // Stopping Point:
  while (x <= 10) {

    // Task:
    cout << x << " ";

    if (x == 5) {
      x++;
      continue;
    }

    // Next State:
    x++;
  } // When line number 16 is executed, I will directly be at line number 21 and
    // then again line number 10 is executed as I have still not moved out of
    // the current loop.ALl the line between line number 16 and line number 21
    // will now not be executed when continue is encounted.
}
