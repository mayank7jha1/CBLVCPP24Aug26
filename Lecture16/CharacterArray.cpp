#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  //
  //   char ch[][4]{
  //       {'M', 'a', 'y', '\0'},
  //       {'S', 'a', 'y', '\0'},
  //       {'H', 'a', 'y', '\0'},
  //   };
  //
  //   char ch1[][4]{
  //       {"May"},
  //       {"Say"},
  //       {"Hay"},
  //   };

  //>> and << Operator ke sath aap character array me input and output ek sath
  // kar paate ho.
  int n, m;
  cin >> n >> m;

  // ch3 ka matlab hain aapke pass n strings/words hain and har word/string m
  // characters ke sath aata hain.

  // Again Sorting this entire ch3 will mean nothing.
  char ch3[n][m]; // This is a 2-d array made from n 1-d character array and har
                  // character arraay me characters kitne hain vo hain m.
  // sort(ch3, ch3 + n); //<< and >>

  // ch3 : Will be the address of the first row ka first block:
  // ch3+3 : It will be the address of the last row ka first block:
  // ch3+4 : It will be the address of the last row + 1 ka first block.

  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     cin >> ch3[i][j];
  //   }
  //
  // }

  // This will be a single string/word.
  //  ch3[0] : May
  //  ch3[1] : Hay
  //  ch3[2] : Say
  //
  //   This will be a character:
  //  ch3[0][2] : y

  for (int i = 0; i < n; i++) {
    cin >> ch3[i];
  }

  for (int i = 0; i < n; i++) {
    cout << ch3[i] << " ";
  }

  sort(ch3[1], ch3[1] + m);

  int n1;
  cin >> n1;

  // Array of string:
  //  This is an array of size n where each a[i] is a string.
  string s[n1]; // Mujhe ek toh har string ke ander kitne character hain ye
                // define karne ki zarurat nahi hain.
  // s[0] : This is a string:
  // s[1] : This is also a string. []
  // s[1][2] : This is a character.

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  for (int i = 0; i < n; i++) {
    cout << s[i] << " ";
  }

  // Dictionary order me:
  // THis will compare s[0] ko s[1] se
  // hay
  // may
  // maz

  // Entire array ko sort karna hain.
  sort(s, s + n1);

  // aap 1st row ko sort karna chahte ho:
  // kyuki ye stringhain so you have to use iterators.
  sort(s[1].begin(), s[1].end());

  return 0;
}
