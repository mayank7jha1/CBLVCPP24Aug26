#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  // I am always ensuring a is the larger number and b is the smaller number.
  if (b > a) {
    // Swap a and b:
    int temp = a;
    a = b;
    b = temp;
  }

  // First method:
  // Idea: Go to every number from 1 to b and find the largest number that
  // divides both a and b.

  int i = 1;  // Starting Point:
  int ans{0}; // This stores the abtak ka answer or abtak ka gcd.

  // Stopping Point:
  while (i <= b) {

    // Task:
    if ((a % i == 0) and (b % i == 0)) {
      // This i is a potential value of gcd and hence store this value and look
      // for a better answer.
      ans = i;
    }

    // Next State:
    i++;
  }

  cout << ans;
  cout << endl << "----------------------" << endl;

  // Method 02 : Long Divison Method:
  // gcd(a,b) = gcd(b,a%b)
  // gcd(a,0) = a

  // // a = 105  and b = 30:
  // while (b != 0) {
  //   int temp = a;
  //   a = b;
  //   b = temp % b;
  // }

  // cout << a << endl;

  // LCM of a,b:
  cout << (a * b) / ans << endl;

  return 0;
}
