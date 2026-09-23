#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 100001;

int main() {

  // How to define an array:
  int a[4]; // All the blocks of this array will now contain some garbage value.

  // Copy List Initialisation:
  // {}: Collection of elements.
  int a1[4] = {3, 2, 1, 6};

  // Direct List Initialisation:
  int a2[4]{3, 2, 1, 6};

  // Zero/Value Initialisation:
  int a3[4]{}; // This is to initialise all the 4 blocks with value zero.

  // We have created an array of size 4 whose values are 3,2,1,6.
  int a5[]{3, 2, 1, 6};

  int a6[4]{3, 2}; // First block of this array will be 3, second block will 2
                   // and then rest of all the other blocks will be zero.

  int z7[4]{0};

  int z8[]{}; // This is an array of just size 1 with value zero.

  // int z9[]; // This is not allowed.

  int n; // Here we are assuming that n is a non negative, non zero postive
         // integer.
  cin >> n;

  // Although this is allowed as you are creating an array of size n whose value
  // has already been given to us by the user.
  // int b[N];
  int b[n];

  // cin >> b[0];
  // cin >> *(b + 1);
  // cin >> b[2];
  // cin >> b[3];
  // cin >> b[4];

  // Traversal:

  for (int i = 0; i < n; i++) {
    cin >> b[i];
    // cout << b[i];
  }

  for (int i = 0; i < n; i++) {
    cout << b[i];
  }

  return 0;
}
