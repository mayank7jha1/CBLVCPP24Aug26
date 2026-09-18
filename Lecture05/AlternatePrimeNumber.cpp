#include <iostream>
using namespace std;

int main() {

  // Print All the prime numbers between 2 to n.
  int n;
  cin >> n;

  // This count will tell me ki current prime number konse count ka hain.
  int count = 0;

  for (int cn = 2; cn <= n; cn++) {

    int flag = 0;
    for (int j = 2; j * j <= cn; j++) {
      if ((cn % j) == 0) {
        flag = 1;
        break;
      }
    }

    if (flag == 0) {
        
      count++;
      if (count % 2 == 1) {
        cout << cn << " ";
      }
    
    }
  }

  return 0;
}
