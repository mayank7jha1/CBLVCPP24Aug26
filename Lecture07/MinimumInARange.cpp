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

  // Find the minimum element from 0 index till n-1 index.

  int minima = INT_MAX; // Idea here is : Whatever be the first element of the
                        // array that element should automatically become the
                        // minima till the first element.
  for (int i = 0; i < n; i++) {

    if (a[i] < minima) {
      minima = a[i];
    }
  }

  cout << minima << endl;

  cout << endl << "-------------------------------" << endl;

  // Find the minimum element from 0 index till n-1 index.
  int minima02 = a[0];

  // Find the minima from 1 to n-1 index.
  for (int i = 1; i < n; i++) {
    if (a[i] < minima02) {
      minima02 = a[i];
    }
  }

  cout << minima02 << endl;

  cout << endl << "-------------------------------" << endl;

  // Find the minimum element from 3rd index till n-1 index.
  int minima03 = a[3];

  for (int i = 4; i < n; i++) {
    if (a[i] < minima03) {
      minima03 = a[i];
    }
  }

  cout << minima03 << endl;

  cout << endl << "-------------------------------" << endl;

  // Find the index of the minimum element from 3rd index till n-1 th index.
  // 3rd index se lekar 3rd index tak minima is 3rd index vala element only.
  int minima04 = 3;

  for (int i = 4; i < n; i++) {
      
    if (a[i] < a[minima04]) {
      minima04 = i;
    }
  }
  
  cout << minima04 << endl;

  cout << endl << "-------------------------------" << endl;

  return 0;
}
