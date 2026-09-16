#include <climits>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

// Type casting : Type Conversion:
// 1. Implicit : Automatic
// 2. Explicit : Manual

int main() {

  // double d{200.45};

  // // Type Conversion:
  // // d ka data which was of type double usko int me store karne ke liye
  // narrow
  // // kardiya.

  // int z = d; // This is allowed.
  // cout << z << endl;

  // int x{100};
  // char ch{'a'}; // Internally ch is a variable of type char whose size is 1
  // byte
  // // and it is storing the ascii value of a which is 97.

  // // Implicit Type Casting:
  // // x = x + ch;
  // x = x + 'a';
  // cout << x << endl;

  // int m{100};
  // double n = 9.123;
  // double p = m + n;

  // cout << p << endl;

  // cout << endl << "----------------------------------------" << endl;
  // char ch2 = '9';

  // int y{57};
  // char ch3{57}; // This is also allowed and this means 9 only in char.

  // cout << ch2 << endl;

  // cout << y << endl;
  // cout << (int)ch2 << endl;

  int x{10};
  double d{9.123};
  char ch{'a'};

  // Implicit Type Casting:
  cout << x + ch << endl; // ch will be treated as a integer.
  cout << x + d << endl;  // x is treated as a double value.

  // x is treated as double and is copied in d which is also double.
  double p = x + d;

  // ch is treated as integer and is copied in y which is also a integer.
  int y = x + ch;

  // ch is treated as a integer and is copied in a character bucket here both
  // type casting is being used. (Explicit and Implicit)
  //  Implicit : ch is being treated as integer
  //  Explicit : A integer value is treated as ascii or character due to the
  //  type of ch1.
  char ch1 = x + ch;

  cout << p << endl;
  cout << y << endl;
  cout << ch1 << endl;

  cout << endl << "----------------------------------------------" << endl;

  int m = x + d; // Main ek double value of (x+d) ko store kar raha hu ek int
                 // me.

  cout << x + d << endl; // This is by default a double value.

  double o = x + d;
  // Explict : For this line only o is treated as integer.
  cout << (int)o << endl;

  cout << (int)(x + d) << endl; // Implicit and Explicit :
  cout << (int)x + ch << endl;
  cout << (char)x + ch << endl;

  cout << endl << "----------------------------------------------" << endl;

  cout << x + d << endl;

  // cout has a precision of 6 significant digit:
  // setprecision(2) : Significant digit
  // fixed and setprecision : Decimal point precision:
  cout << 109.1234567 << endl;
  cout << setprecision(8) << 109.1234567 << endl;
  cout << fixed << setprecision(8) << 109.123456789 << endl;
}
