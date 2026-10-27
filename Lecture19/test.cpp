#include <climits>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  // By Default the precision of cout is upto 6 significant digits.
  cout << 1289.238566 << endl;

  // Now precision is upto 8 significant digits.
  cout << setprecision(8) << 1289.238566 << endl;

  // If You want precision after decimal.
  cout << fixed << setprecision(8) << 128897979.2385668975 << endl;

  return 0;
}
