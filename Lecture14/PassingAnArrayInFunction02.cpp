#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

void Solve(char *z, int n) {
  cout << z << endl;
  z[3] = '?';
  return;
}

int main() {

  char ch[]{"Mayank"};
  char ch1[]{'S', 'a', 'm', '\0'};
  char ch2[100];
  cin >> ch2;
  cout << ch2 << endl;

  int n = sizeof(ch) / sizeof(char);
  Solve(ch, n);

  //<< and >> Operators are overloaded:
  cout << ch << " " << n << endl;

  cout << ch << endl;
  return 0;
}
