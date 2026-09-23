#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Motivation : Find the first and last index of the key and if key is not
// present then just print -1.

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int key;
  cin >> key;

  int fi = -1;
  int li = -1;

  // Find the first index:
  for (int i = 0; i < n; i++) {
    if (a[i] == key) {
      fi = i;
      break; // Now you don't need to further search the element as you have
             // found one.
    }
  }

  cout << fi << " ";

  // Find the last index:
  for (int i = 0; i < n; i++) {

    if (a[i] == key) {
      li = i; // And I will not break from here: Why because mujhe last index
              // chahiye jab element key ke barabar hain.
    }
  }

  cout << li;
  cout << endl << "------------------------------" << endl;

  int fi2{-1}, li2{-1};

  for (int i = 0; i < n; i++) {

    if (a[i] == key) {

      if (fi2 == -1) {
        fi2 = i; // Ye vo index hain jaha par tumko sabse pehli bar key vala
                 // element mila hain.
      }

      // Current Index :  i
      // Current element : a[i]:

      li2 = i;
    }
  }

  cout << fi2 << " " << li2 << endl;

  return 0;
}
