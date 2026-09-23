#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int i = 1;

  // Character Bucket Can only store a single character at a time.
  char ch;
  while (i <= n) {

    cin >> ch;
    cout << ch;

    i++;
  }

  return 0;
}

// Collection of Characters ko hum log text bolte hain ya string bolte hain.
