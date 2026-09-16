#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n; // Starting Point:
  int sum{0};
  int rv{0};

  // Ending Point:
  while (n > 0) {

    // Task:
    int ld = n % 10;
    sum += ld;
    rv = (rv * 10) + ld;

    // Next State:
    n /= 10;
  }

  cout << rv << " " << sum << endl;

  return 0;
}
