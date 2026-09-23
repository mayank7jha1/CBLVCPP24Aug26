#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int x{10};
  cout << &x << endl;
  cout << &x + 1 << endl;

  return 0;
}

// 6422284
// 6422288
