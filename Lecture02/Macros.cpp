#include <iostream>
using namespace std;

// This is a macro that will replace all the word PI with constant value 3.14 at
// the time of precomputation.

#define PI 3.14

int main() {

  cout << PI << endl;

  // PI++; Not allowed. The value of PI now cannot be changed.
  // Logic : This line 11 will be executed at the time of compilation.
  // But at the time of compilation there is not PI so this Line PI++ produces
  // an error.
  // Why is there no PI at the time of compilation as I have told above all the
  // PI will be replaced with constant value 3.14 at the time of precomputation.
}
