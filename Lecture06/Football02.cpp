#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char cc;

  // I have initialised pc with 2 as ch can never be 2 and if pc is 2 then I
  // know that the current character is the first input character.
  char pc = '2';
  int C1 = 0, C0 = 0;

  while (cin >> cc) {

    if (cc == '1') {

      if (pc == cc or pc == '2') {
        C1++;
        if (C1 == 7) {
          cout << "YES" << endl;
          return 0;
        }

      } else {
        C0 = 0;   
        C1++;
      }

    } else {
      // cc is zero.
      if (pc == cc or pc == '2') {
        C0++;

        if (C0 == 7) {
          cout << "YES" << endl;
          return 0;
        }

      } else {
        C1 = 0;
        C0++;
      }
    }

    // Update the previous character.
    pc = cc;
  }

  cout << "No" << endl;

  return 0;
}
