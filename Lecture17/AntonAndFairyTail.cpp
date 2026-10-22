#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  if (m >= n) {
    cout << n << endl;
    return 0;
  }

  // Idea: I will go to every day one by one and check if the grains on this day
  // is <=0 or not.

  int day = 1;
  int bg = n;

  while (bg > 0) {
    // How many sparrow will come today?
    bg -= day;

    if (bg <= 0) {
      break;
    }

    day++;
    bg += m;

    if (bg > n) {
      bg = n;
    }
  }

  cout << day << endl;

  return 0;
}
