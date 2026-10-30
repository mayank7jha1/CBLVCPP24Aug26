#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> &a, int target) {

  int s = 0, e = a.size() - 1;
  bool ans = 0;

  while (s <= e) {
    int mid = (s + e) / 2;

    if (a[mid] == target) {
      ans = 1;
      break;
    }

    if (a[s] == a[mid] and a[mid] == a[e]) {
      // I Cannot directly decide which region is sorted.
      s++;
      e--;
      continue;
    }

    if (a[s] <= a[mid]) {
      // Left Region is Sorted.
      if (a[s] <= target and target <= a[mid]) {
        e = mid - 1;
      } else {
        s = mid + 1;
      }
    } else {
      // Right Region is Sorted.

      if (a[mid] < target and target <= a[e]) {
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
  }

  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int target;
  cin >> target;

  cout << search(v, target) << endl;

  return 0;
}
