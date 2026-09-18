#include <iostream>
using namespace std;

int main() {

  // Print All the prime numbers between 2 to n.
  int n;
  cin >> n;

  for (int cn = 2; cn <= n; cn++) {
      
    int flag = 0;
    for (int j = 2; j * j <= cn; j++) {
      if ((cn % j) == 0) {
        flag = 1;
        break;
      }
    }

    if (flag == 0) {
      cout << cn << " ";
    }
    
  }

  return 0;
}
