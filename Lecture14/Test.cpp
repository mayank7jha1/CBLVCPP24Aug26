#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int F1(int x) {
  x = 100;
  return -1;
}

void F2(int x) { 


    return;
}

int main() {

  int ans = F1(10);
  cout << ans << endl;

  cout << F1(10) << endl;

  F2(10);

  return 0;
}
