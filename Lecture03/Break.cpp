#include <iostream>
using namespace std;

int main() {

  // Starting Point:

  int y = 1;
  while (y <= 3) {

    int x = 1; // Ye line ek bar chalegi
    // Stopping Point:
    while (x <= 10) {
      // Task:
      cout << x << " ";

      if (x == 5) {
        break; // Aapka program ka flow will move out of the current loop.

      } // This is not the end of the current loop this is the end of the
        // condtional statement.

      // Next State:
      x++;
    }

    // Jaise hi line 17 execute hue tum line 26 par aajaoge.
    cout << "Yo" << endl;

    y++;
  }

  // When I am here this means I am out of both the loops.
}
