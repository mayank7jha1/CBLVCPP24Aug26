#include <iostream>
using namespace std;

// Global Scope:
int x{100};
// x += 10; // Not Allowed.

// You can access any variable defined inside the global scope/memory using the
// scope resolution operator ( :: )
// Use 01 :  To access anything in global scope

int y;
// cin >> y; // Not Allowed.

int main() {

  cout << x << endl;
  int x{200}; // THis is inside main and is local to main block.
  cout << ::x << endl;

  ::x = ::x + 1000; // This will change the value of global x.
  cout << ::x << endl;

  cout << x << endl;

  if (true) {
    int x{300}; // This is local to if block.

    cout << x << endl;   // This will print x local to if block.
    cout << ::x << endl; // This will print x in global scope.
  }




  
}
