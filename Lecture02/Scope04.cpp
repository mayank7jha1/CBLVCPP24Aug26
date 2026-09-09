#include <iostream>
using namespace std;

int main() {

  int x{100};
  x++;

  if (true) {
    int x{200};
    x++;
    cout << x << endl;
    if (true) {
      x += 10;
      int x{300};
      x++;
      cout << x << endl;
      if (true) {
        x += 10;
        int x{400};
        x += 10;
        cout << x << endl;
      }
      cout << x << endl;
      x += 10;
    }
    cout << x << endl;
    x += 1;
    cout << x << endl;
  }

  x += 10;
  cout << x << endl;

  return 0;
}
