#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  // Integer:
  //  Starting Point:
  double i = 1;

  // Stopping Point and Task:
  while ((i * i) <= n) {

    // Next State:
    i++;
  }

  i--;

  // First Decimal:
  // Stopping Point and Task :
  while ((i * i) <= n) {

    // Next State:
    i += 0.1;
  }

  i -= 0.1;

  // Second Decimal:

  // Stopping Point and Task :
  while ((i * i) <= n) {

    // Next State:
    i += (0.01);
  }

  i -= (0.01);

  // Third Decimal:

  // Stopping Point and Task :
  while ((i * i) <= n) {

    // Next State:
    i += (0.001);
  }

  i -= 0.001;

  cout << i << endl;

  return 0;
}
