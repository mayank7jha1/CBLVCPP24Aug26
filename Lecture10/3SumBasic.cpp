#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Number of test cases:
  int t;
  cin >> t;

  for (int l = 1; l <= t; l++) {

    // Currently You are solving test case number l:
    // Question : For this test case you will be given a value n
    // and an array of size n, then you need to find out if there
    // exists a triplet whose sum ka last digit is 3 or not.

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    // This will tell you ki for the given test case you have found
    //  a triplet or not.
    int flag = 0;

    for (int i = 0; i < n - 2; i++) {
      for (int j = i + 1; j < n - 1; j++) {

        for (int k = j + 1; k < n; k++) {

          if ((a[i] + a[j] + a[k]) % 10 == 3) {
            flag = 1;
            cout << "YES" << endl;
            break;
          }
          // Line : 40:
        }
        // Line : 43:
        if (flag == 1) {
          break;
        }
      }

      // Line : 49:
      if (flag == 1) {
        break;
      }
    }

    // Line 47:

    if (flag == 0) {
      cout << "NO" << endl;
    }
  }

  return 0;
}
