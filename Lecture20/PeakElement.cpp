#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> &nums) {
  int s = 0, e = nums.size() - 1;
  int ans = -1;

  while (s <= e) {
    int mid = (s + e) / 2;
    if (mid == nums.size() - 1 or nums[mid] > nums[mid + 1]) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }

  return ans;
}

int main() {
  int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    cout << findPeakElement(v) << endl;
    return 0;
  }

  return 0;
}
