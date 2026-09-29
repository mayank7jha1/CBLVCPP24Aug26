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
  // Prefix Sum Basic 0-Based Indexing:
  // Computations : (~n*n)
  int pre[n]{};
  for (int i = 0; i < n; i++) {

    int sum = 0;
    for (int j = 0; j <= i; j++) {
      sum += a[j];
    }

    // cout << sum << endl;
    pre[i] = sum;
  }

  for (int i = 0; i < n; i++) {
    cout << pre[i] << " ";
  }
  cout << endl << "--------------------------" << endl;

  // Computations : ~n:
  int pre02[n]{};
  pre02[0] = a[0];
  for (int i = 1; i < n; i++) {
    pre02[i] = pre02[i - 1] + a[i];
  }

  for (int i = 0; i < n; i++) {
    cout << pre[i] << " ";
  }

  return 0;
}
