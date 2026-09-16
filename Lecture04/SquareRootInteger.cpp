#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  // Starting Point:
  int i = 1;

  // Stopping Point and Task:
  while ((i * i) <= n) {

    // Next State:
    i++;
  }

  cout << (i - 1) << endl;

  return 0;
}
