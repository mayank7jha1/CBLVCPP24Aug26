#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int height[n]{};
  for (int i = 0; i < n; i++) {
    cin >> height[i];
  }

  // Idea:
  int i = 0;
  int j = n - 1;

  int MaxArea = INT_MIN;
  while (i <= j) {
    int ContributingHeight = min(height[i], height[j]);
    int width = j - i;

    int area = ContributingHeight * width;
    MaxArea = max(MaxArea, area);

    if (height[i] < height[j]) {
      i++;
    } else {
      j--;
    }
  }

  cout << MaxArea << endl;

  return 0;
}
