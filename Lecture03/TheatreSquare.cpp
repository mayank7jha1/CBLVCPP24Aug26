
#include <iostream>
using namespace std;

int main() {
  int n, m, a;
  cin >> n >> m >> a;

  // Ceil Multiplication:
  int cn = ((n + a - 1) / a);
  int cm = ((m + a - 1) / a);

  // We want the ceil value of (n/a): (n+a-1)/a

  // n=6 and a= 4: Normal n/a : 1
  // n/a ka ceil will 2.
  
  cout << cn * cm << endl;

  return 0;
}
