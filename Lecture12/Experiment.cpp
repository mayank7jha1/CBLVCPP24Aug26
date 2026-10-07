#include <iostream>
using namespace std;

int main() {

  // Null Character will always be counted in size in case of character array.
  char ch[]{'M', 'a', 'y', '\0'};
  cout << ch << endl;
  // Ignore:
  cout << sizeof(ch) / sizeof(char) << endl;

  //   for (int i = 0; ch[i] != '\0'; i++) {
  //     cout << ch[i];
  //   }
  //   cout << endl << "---------------------------" << endl;
  //
  //   char ch1[]{"May"};
  //   cout << ch1 << endl;
  //
  //   for (int i = 0; ch1[i] != '\0'; i++) {
  //     cout << ch1[i];
  //   }
  //   cout << endl;

  // char ch2[10];
  // cin >> ch2;
  // cout << ch2 << endl;
}
