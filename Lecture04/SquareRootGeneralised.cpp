#include <iostream>
using namespace std;

int main() {
  int n, p;
  cin >> n >> p;

  // Integer:
  //  Starting Point:
  double i = 1;

  // Stopping Point and Task:
  while ((i * i) <= n) {

    // Next State:
    i++;
  }

  // This loops will run for precsion times.
  int j = 1;
  double IncrementFactor = 0.1;

  while (j <= p) {

    // When this below condition fails that means for the current increment
    // factor you have found the number.
    while ((i * i) <= n) {
      i += (IncrementFactor);
    }

    // You are doing this because whenever line number 27 condition fails your i
    // is one step ahead.
    i -= IncrementFactor;

    // For the next Decimal increment Factor should update by a magnitude of
    // /10.

    IncrementFactor /= 10;

    j++;
  }

  i--;
}
