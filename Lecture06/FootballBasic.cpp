#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Motivation: Just Check if there are 7 one's or 7 zero's in the given string.

int main() {

  char ch;
  int C0{}, C1{};

  while (cin >> ch) {

    if (ch == '0') {
      C0++;
    } else {
      C1++;
    }
  }

  if (C1 >= 7 or C0 >= 7) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
