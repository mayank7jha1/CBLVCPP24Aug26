#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  // Method 01: There should not be any number is the range of 2 to n-1, that
  // divides the current number n in order for this number to be prime.

  // Starting Point:
  int i = 2;

  int flag = 0;

  // Stopping Point:
  while ((i * i) <= n) {

    // Task:
    if ((n % i) == 0) {
      cout << "No" << endl;
      flag = 1;
      break;
    }

    // Next State:
    i++;
  }

  if (flag == 0) {
    cout << "Yes" << endl;
  }

  return 0;
}
