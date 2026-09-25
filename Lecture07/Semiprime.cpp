#include <iostream>
using namespace std;
#define int long long

bool CheckPrime(int n) {
  if (n < 2) {
    return false;
  }

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

bool Check(int n) {
  for (int i = 2; i * i <= n; i++) {

    if (n % i == 0) {

      int q = n / i;
      if ((CheckPrime(q) == 1) and (q != i)) {
        return true;
      } else {
        return false;
      }
    }
  }

  return false;
}

int32_t main() {
  int n;
  cin >> n;

  if (Check(n)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
