#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n == 0 or n == 1) {
    cout << n << endl;
  } else {

    int a = 0; // 0th Fibonacci Number
    int b = 1; // 1st Fibonacci Number

    // Starting Point:
    int i = 2;

    int c{0};

    // Stopping Point:
    while (i <= n) {

      // Task:
      //  Current Fibonacci Number: ith Fibonacci Number:
      c = a + b;

      // For the next Fibonacci Number these previous 2 values stored in a and b
      // should now be changed.
      a = b;
      b = c;

      // Next State:
      i++;
    }

    cout << c << endl;
  }

  return 0;
}
