#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Number of test cases:
  int t;
  cin >> t;

  // 1000:
  for (int l = 1; l <= t; l++) {

    int n;
    cin >> n;

    // 2*10^5
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      a[i] %= 10;
    }

    // 2*10^5
    int freq[10]{};
    for (int i = 0; i < n; i++) {
      int ld = a[i];

      if (freq[ld] < 3) {
        freq[ld]++;
      }
    }

    // 30
    int b[30]{};
    int size{0};

    for (int i = 0; i < 10; i++) {
      int currentDigit = i;
      int NumberOfOccurrence = freq[i];
      for (int j = 1; j <= NumberOfOccurrence; j++) {
        b[size] = currentDigit;
        size++;
      }
    }

    // 30*30*30 :~ 4*10^5+27*10^3*1000  : ~10^8
    int flag = 0;
    for (int i = 0; i < size - 2; i++) {
      for (int j = i + 1; j < size - 1; j++) {
        for (int k = j + 1; k < size; k++) {
          if ((b[i] + b[j] + b[k]) % 10 == 3) {
            flag = 1;
            cout << "YES" << endl;
            break;
          }
        }
        if (flag == 1) {
          break;
        }
      }
      if (flag == 1) {
        break;
      }
    }

    if (flag == 0) {
      cout << "NO" << endl;
    }
  }

  return 0;
}
