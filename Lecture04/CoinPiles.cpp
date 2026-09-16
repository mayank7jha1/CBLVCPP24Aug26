#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define endl "\n"
#define int long long

// By default : Jaha par bhi int keyword likha hoga hamara compiler usko long
// long se replace kardega.
// By default size of int : 4 byte
// Rule for size of int : It should be atleast 2 byte.
// short int :

int32_t main() {

  int t; // Number of test cases : THis is the number of times user wants you to
         // solve the question.
  cin >> t;

  int i = 1; // Starting Point:

  int a, b;

  // Ending Point:
  while (i <= t) {

    // Task:For the current value of a and b, check if you are able to empty
    // both the piles simultanouesly.

    // int a, b;
    cin >> a >> b;

    if (((a + b) % 3 == 0) and (((2 * a) >= b) and ((2 * b) >= a))) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

    // Next State:
    i++;
  }

  return 0;
}
