#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n; // This is the starting Point for the repeat Statement/Loop.

  // Ending Point: != : Not Equal to:
  // (n != 1) This expression will be true when the value of n is not equal to 1.
  
  while (n != 1) {

    // Task :
    cout << n << " ";

    // Next State:

    if (n % 2 == 0) {

      // n is even:
      // n = n / 2;
      n /= 2; // Compound Statement:

    } else {

      // n is odd:
      n = (3 * n) + 1;
    }
  }

  cout << 1 << endl;

  return 0;
}
