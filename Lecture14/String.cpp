#include <algorithm>
#include <climits>
#include <cstring> //This is for character Array Functions.
#include <iostream>
#include <string> //This is for the container string Functions.
#include "C:\Users\mayan\OneDrive\Desktop\Master\Launchpad\OngoingBatch\CBLVCPP24Aug26\HeaderFiles\Mayank.h"
#include "../HeaderFiles/Mayank.h"

using namespace std;

int Length(char *ch) {
  int l = 0;
  for (int i = 0; ch[i] != '\0'; i++) {
    l++;
  }

  return l;
}

void Solve(string &m) {

  // This m is local and is passed by value from main.
  cout << m << endl;

  m = "Utkarsh";
  cout << m << endl;

  return;
}

string F() {
  // You are returning a string from this function F;

  string p = "Lamda";
  return p;
  // return "Lamda";
}

int main() {

  // Similar to STL : We have functions for character Array also.

  int x;
  string s;

  char ch[]{"Mayank"};
  string s1{"Samyak"};

  ch[2] = 'M';
  s1[2] = 'M';

  cout << ch << endl;
  cout << s1 << endl;

  for (int i = 0; ch[i] != '\0'; i++) {
    cout << ch[i] << " ";
  }
  int n = Length(ch);
  int n1 = sizeof(ch) / sizeof(char);
  int n2 = strlen(ch);

  for (int i = 0; i < n; i++) {
    cout << ch[i] << " ";
  }

  // Container : . (dot) operator
  int m = s1.length();

  for (int i = 0; i < m; i++) {
    cout << s1[i] << " ";
  }
  cout << endl << "-------------------------------" << endl;
  s1.push_back('a');
  s1 = s1 + 'a'; // This also appends char a at the end of s1.
  s1 = s1 + "Rahul";
  s1 = "Atul" + s1;

  s1.pop_back(); // Removes the last character from the string.

  cout << s1.front() << " " << s1[0] << endl;
  cout << s1.back() << " " << s1[s1.length() - 1] << endl;

  // String :

  string s2 = s1;

  // Containers are passed by value:

  Solve(s2);
  cout << endl << "-------------------------" << endl;
  cout << s2 << endl;

  string ans = F();
  cout << ans << endl;
  cout << endl << "------------------------------------" << endl;

  // Containers me Algorithms lagane hain:

  char ch1[]{"CellPhone"};
  int n5 = strlen(ch1);

  // Every type of comparison that happens in character happen on the basis of
  // their ascii value.

  // Lexographical Order or Dictionary Order.
  sort(ch1, ch1 + n5);
  cout << ch1 << endl;

  cout << endl << "--------------------------------" << endl;
  string t{"Mobile"};
  sort(t.begin(), t.end());
  reverse(t.begin(), t.end());

  cout << t << endl;
  return 0;
}
