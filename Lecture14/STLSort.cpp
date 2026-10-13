#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Function Pointer:
bool C2(int x, int y) {
  if (x > y) {
    // x and y are at the correct position.
    return true;
  } else {
    // x and y are not at the correct position swap them.
    return false;
  }
}

void Sort(int *b, int n, bool (*C2)(int, int)) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (C2(b[j], b[j + 1]) == false) {
        swap(b[j], b[j + 1]);
      }
    }
  }
}

int main() {
  int a[]{3, 2, 1, 9, 8, 3, 4, 6};
  int n = sizeof(a) / sizeof(int);

  Sort(a, n, C2);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}
