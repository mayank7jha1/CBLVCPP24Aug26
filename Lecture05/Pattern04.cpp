#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int r = 1; r <= n; r++) {

    // Current Row is represented by variable r:

    for (int c = 1; (c + r <= n + 1); c++) {
      cout << "*";
    }

    // I have printed all the stars for the current row.
    cout << endl;
  }

  return 0;
}
