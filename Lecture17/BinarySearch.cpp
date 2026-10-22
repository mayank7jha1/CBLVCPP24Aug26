#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// The first element that is greater than x in the range.
int UpperBound(int *a, int n, int x) {
  int s = 0, e = n - 1;
  int ans = n;

  while (s <= e) {
    int mid = (s + e) / 2;
    if (a[mid] > x) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  return ans;
}

// The first element in the range that is greater than or equal to x.
int LowerBound(int *a, int n, int x) {
  int s = 0, e = n - 1;
  int ans = n;

  while (s <= e) {
    int mid = (s + e) / 2;
    if (a[mid] >= x) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  return ans;
}

int BinarySearch(int *a, int n, int target) {
  int s = 0, e = n - 1;
  int ans = n; // Potential Answer till now.

  while (s <= e) {
    int mid = (s + e) / 2;
    if (a[mid] == target) {
      ans = mid;
      break;
    } else if (a[mid] > target) {
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  return ans;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int target;
  cin >> target;

  cout << BinarySearch(a, n, target) << endl;
  cout << LowerBound(a, n, target) << endl;
  cout << UpperBound(a, n, target) << endl;

  cout << "Frequency of " << target << " : "
       << UpperBound(a, n, target) - LowerBound(a, n, target) << endl;

  return 0;
}
