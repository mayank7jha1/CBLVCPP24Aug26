#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // char ch{65};
  // char ch1{'A'};

  // if (ch1 > 30) {
  //   cout << "Yes" << endl;
  // }

  // ch1++;
  // cout << ch1 << endl;

  // Small b has ascii value of 98.
  // Capital b has a ascii value of 66.
  // ch1 += 32;
  // cout << ch1 << endl;
  // ch1 -= 32;
  // cout << ch1 << endl;

  // int x{10};

  // char ch3 = x;

  // // cout << (char)x << endl;
  // cout << ch3 << endl;

  char ch{'9'};
  int x = ch - '0';
  int y = ch - 48;

  cout << x << endl;

  return 0;
}
