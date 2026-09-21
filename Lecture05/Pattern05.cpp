#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int r = 1; r <= n; r++) {

    // Current Row is represented by variable r:

    int c = 1;

    // First Subtask : Print the spaces :
    for (; c + r < n + 1; c++) {
      cout << " ";
    }

    // Second Subtask for the current row only:
    for (; c <= n; c++) {
      cout << "*";
    }

    // I have printed all the stars for the current row.
    cout << endl;
  }

  return 0;
}
