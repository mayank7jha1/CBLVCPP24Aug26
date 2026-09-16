#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  // Method 01: There should not be any number is the range of 2 to n-1, that
  // divides the current number n in order for this number to be prime.

  // Starting Point:
  int i = 2;

  // Stopping Point:
  while (i <= (n - 1)) {

    // Task:
    if ((n % i) == 0) {
      // Current number of the range [2,n-1] divides n completely, then what
      // should I do?
      cout << "No" << endl;

      // Stop the Program.
      return 0;
    }

    // Next State:
    i++;
  }

  // If I am standing here that means the program never stopped at line number
  // 25, that in turns means the line number 19 was never satified and hence we
  // can say there was no number is range [2,n-1] that divides n completely and
  // hence n can be termed as a prime number.

  cout << "Yes" << endl;

  return 0;
}
