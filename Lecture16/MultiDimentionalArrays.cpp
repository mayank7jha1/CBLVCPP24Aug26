#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

/*
 *  Arrays Defined in Static Memory will always be passed by reference/address.
 *  Arrays Defined in Static Memory : Its size cannot be changed once defined.
 *  In MultiDimentional Structure for Static memory it is compulsory to mention
 *  last ke n-1 dimentions in case of a structre of n dimentions.
 *
 *
 */

// Latest Combiler: C - Style Writing:

//  void Solve(int *c, int n, int m) {
//
//    // Now How do I know Ki ek row and column me kitne elements hain?
//    // Row Wise Sum:
//    for (int i = 0; i < n; i++) {
//      int sum = 0;
//      for (int j = 0; j < m; j++) {
//        sum += c[i][j];
//      }
//
//      cout << sum << endl;
//    }
//  }

const int n = 4, m = 3;
void Solve(int c[n][m]) {


    
}

int main() {

  int a1[2][3]{
      {1, 2, 5},
      {3, 2},
  };

  int a2[][3]{
      {1, 2, 3},
      {3, 2, 1},
      {3, 2},
  };

  // For a 3-D Array:
  // b is a 3-d array which is made from some combination of
  // 4x3 2-d Arrays.
  int b[][4][3]{
      {
          {2, 1, 3},
          {3, 3, 3},
          {1, 1, 1},
          {4, 4, 4},

      },
      {
          {3, 3},
          {2, 2, 2},
      },
  };

  // int a3[][]{}; Not Allowed.

  cin >> n >> m;

  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  cout << a << endl;

  // Solve((int *)a, n, m);

  Solve(n, m, a);

  // n = 100, m = 20;
  // Solve(n, m, a);

  return 0;
}
