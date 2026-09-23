#include <iostream>
using namespace std;

int main() {

  int x;
  int x1{10};
  int x2;
  cin >> x2;
  cout << x << " " << x1 << " " << x2 << endl;

  // Character Buckets are of 1 byte.
  // You can only store a single character in a single character bucket.
  char ch;
  char ch1{'A'}; // Internally this will be represented in form of ascii value.
  char ch2;
  cin >> ch2;
  cout << ch << " " << ch1 << " " << ch2 << endl;

  return 0;
}
