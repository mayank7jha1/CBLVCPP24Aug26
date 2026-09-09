#include <iostream>
using namespace std;

// Ideally you should not be able to change its value in global scope.
const int x{100};

#define x 200

int main() {

  cout << x << endl;
  return 0;
}


