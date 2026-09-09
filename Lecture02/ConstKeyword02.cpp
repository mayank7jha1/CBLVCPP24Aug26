#include <iostream>
using namespace std;

const int x{100};

int main() {

  const int x{200}; // You can create this x as global x and this local to main
                    // are different.
  cout << x << endl;
  cout << ::x << endl;

  if (true) {
    int x{300};
    x++; // You can do this as this x is local to if block which is not constant
         // and hence value can be updated.
    cout << x << endl;
    cout << ::x << endl;
  }

  return 0;
}
