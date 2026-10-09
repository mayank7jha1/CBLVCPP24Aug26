#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Generic Programming:
// 1. Function Overloading:
// 2. Default Arguments:
// 3. Templates: (Introduction) : 1. Function Template : <>
// 2. Class Template :
//
// int Sum(int x, int y) { return (x + y); }
// int Sum(int x, int y, int z) { return (x + y + z); }
// int Sum(int x, int y, int z, int m) { return (x + y + z + m); }
// double Sum(int x, double y) { return (x + y); }

// double Sum(int x, int y) { return x + y; }

//<> : templated bracket
template <typename T1, class T2, typename T3>

T3 Sum(T1 x = 0, T2 y = 0, int z = 0, T1 m = 0) {
  return (x + y + z + m);
}

// <> : Data Type Specify karoge:
int main() {

  // cout << Sum(10) << endl;
  cout << Sum<int, double, int>(10, 15) << endl;
  // cout << Sum(10, 15, 20) << endl;
  // cout << Sum(10, 15, 20, 30) << endl;
  cout << Sum<double, double, int>(10, 4.3, 5.4) << endl;

  return 0;
}

/*
 * 1. 2 Pointer
 * 2. 3 Pointer
 * 3. Comparators
 * 4. Lamda Functions
 * 5. Rotation
 * 6. Reversal
 * 7. Sliding Window
 * 8. Famous repeated Algorithms (Kadane,Moore Vooting, Dutch Flag etc.)
 * 9. 2-D and Multidimentional Structure:
 *
 *
 */
