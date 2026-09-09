#include <iostream>
using namespace std;

int main() {

  int x{10};
  x += 10; // Compound Assignment:

  // Any number that is not zero is considered true:
  if (23) {
    int x{40};
    x -= 10;

    cout << x << "\n";
  }

  cout << x << "\n";
}
