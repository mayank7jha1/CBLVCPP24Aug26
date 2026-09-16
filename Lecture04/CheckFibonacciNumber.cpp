#include <iostream>
using namespace std;

// Check if this n is part of fibonacci sequence or not.

int main() {
  int n;
  cin >> n;

  if (n == 0 or n == 1) {
    cout << n << endl;
  } else {

    int a = 0;
    int b = 1;

    // Mujhe Kab tak fibonacci number banane hain:
    while (true) {

      int c = a + b;

      if (c == n) {
        cout << "YES" << endl;
        break;
      }

      if (c > n) {
        cout << "NO" << endl;
        break;
      }

      // current fibonacci number is less than n.
      a = b;
      b = c;
    }
  }

  return 0;
}
