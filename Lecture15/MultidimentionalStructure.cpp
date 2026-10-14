#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  // Array of Arrays:
  int a[2][3];
  int a1[2][3]{
      {1, 2, 5},
      {3, 2},
  };

  cout << a << endl;
  cout << endl << "-------------------------------" << endl;
  cout << a + 1 << endl;
  cout << a[1] << endl;
  cout << &a[1] << endl;
  cout << *a[1] << endl;
  cout << *(a + 1) << endl;
  cout << endl << "------------------------------" << endl;

  int a2[2][3]{};
  int a3[2][3]{{0}};
  int a4[2][3]{{}};

  int n, m;
  cin >> n >> m;

  int a5[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a5[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << a5[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
