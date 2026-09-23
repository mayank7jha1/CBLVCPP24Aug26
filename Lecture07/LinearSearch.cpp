#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Motivation : User is going to give you n values and amoung those n values
// you need to search if there is a value key present or not.

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int key;
  cin >> key;

  for (int i = 0; i < n; i++) {
    // Current Block ki value is represented by a[i]:
    if (a[i] == key) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  // If I am standing here : main array ke har block par chala gaya and Was not
  // able to find key as if i had found one then the program would have never
  // reached here.

  cout << "No" << endl;

  return 0;
}
