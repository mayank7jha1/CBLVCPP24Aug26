#include <iostream>
using namespace std;
#define endl "\n"

int main() {

  int x;
  cin >> x;

  if (x == 2) {
    cout << "NO" << endl;
    return 0;
  }

  if (x % 2 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
