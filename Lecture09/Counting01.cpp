#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int target;
  cin >> target;

  // Idea: Go to every element of the array and check if the current element is
  // equal to the target or not.
  int count = 0; // This stores the freq of the target occurred till now.

  // Computations : ~n:
  for (int i = 0; i < n; i++) {

    if (a[i] == target) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}
