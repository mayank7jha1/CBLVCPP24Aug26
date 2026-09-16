#include <iostream>
using namespace std;
#define int long long

int32_t main() {

  int n; // This is an integer.
  // long long n;
  cin >> n;

  // When you are multiplying an integer with an integer:
  // It can never be of the range long long.

  //  Sum of first n numbers hain:
  // long long ans = (long long)(n * (n + 1)) / 2;
  int ans = ((n * (n + 1)) / 2);

  int sum{0}; // This will store the sum of n-1 numbers given to us by the user.

  // Starting Point:
  int i = 1;
  int x;

  // Stopping Point:
  while (i <= (n - 1)) {

    // Task:
    cin >> x;
    // sum = sum + x;
    sum += x;

    // Next State:
    i++;
  }

  // Now I have the sum of first n numbers stored in ans and sum of n-1 numbers
  // given to us by the user stored in sum variable.

  cout << ans - sum << endl;

  return 0;
}
