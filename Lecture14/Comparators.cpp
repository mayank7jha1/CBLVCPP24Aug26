#include <iostream>
using namespace std;

bool Compare(int x, int y) {
  if (x > y) {
    // x and y are at the correct position.
    return true;
  } else {
    // x and y are not at the correct position swap them.
    return false;
  }
}

void BubbleSort(int *a, int n,bool Compare) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {

      if (Compare(a[j], a[j + 1]) == false) {
        // Swap them:
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

int main() {

  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  BubbleSort(a, n, Compare);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
