#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Integer/Double/Float Arrays:
  // Numeric Arrays: It is use to store collection of numeric Values.

  // All the properties of the integer arrays will also work for character
  // arrays.
  //  Character Arrays: It is use to store collection of characters.
  // Collection of Characters ko hum log : String

  // All things are made in static memory.
  //   int a[10];
  //   char ch[10];
  //
  //   // THis is an integer array of size 10 whose first 5 elements are
  //   mentioned
  //   // and rest all the elements are zero
  //   int a1[10]{10, 21, 3, 4, 5};
  //
  //   // This is a character array of size 10 whose first 6 elements are
  //   mentioned
  //   // and rest all the elements are garbage.
  //   char ch1[10]{'M', 'a', 'y', 97, 'n', 'k'};
  //
  //   // This is an array of size 5.
  //   int a2[]{3, 2, 1, 3, 1};
  //
  //   // This is also an character of size 6.
  //   char ch2[]{'M', 'a', 'y', 97, 'n', 'k'};
  //
  //   // In C++ Collection of characters ko hum log "":
  //   char ch3[]{"Mayank"};
  //
  //   int n;
  //   cin >> n;
  //
  //   char ch4[n];
  //   for (int i = 0; i < n; i++) {
  //     cin >> ch4[i];
  //   }
  //
  //   for (int i = 0; i < n; i++) {
  //     cout << ch4[i] << " ";
  //   }
  //
  //   // cout << ch[2] << endl;
  //   // ch2[2] = 'z';
  //
  //   cout << endl << "-------------------------" << endl;
  //
  //   // These Operators : >> and << Overloaded for character array.
  //   (Extraction and
  //   // Insertion Operators)
  //
  //   // Ek character bucket me tum sirf ek hi character store kar sakte ho.
  //   char ch5 = 'M'; // because it is of 1 byte.
  //
  //   // cin: It cannot read white spaces.
  //   // White Spaces : Space and Next line(endl or /n)

  //.get function is able to read white spaces.
  // char ch;
  // while (cin >> ch) {
  //   cout << ch;
  // }
  //
  //   char ch[100]; // Maximum element that can go in this array is 100.
  //   int k = 0;
  //   char x;
  //
  //   while (cin >> x) {
  //     ch[k] = x;
  //     k++;
  //   }
  //
  //   // k : Is the current index where the new element will go or we can say
  //   it
  //   // also represents the size of the current character array.
  //
  //   for (int i = 0; i < k; i++) {
  //     cout << ch[i];
  //   }

  //>> and <<

  char ch[100];
  // ch[0] :
  //  ch[1]:
  //  cin: It cannot read white spaces.
  cin >> ch; // Jab tak white space nahi mil raha cin ko tab tak aap input read
             // karte rahiye from the user and usko aap ek ek karke different
             // index of the array a me store kar dijiye.

  cout << ch << endl; // Jab tak ch me stopping point nahi milta tab tak read
                      // karke write kardijiye ch ki values ko.

  cout << &ch << endl; // Address of the first block:
  cout << (int *)ch << endl;

  int len = 0;
  for (int i = 0; ch[i] != '\0'; i++) {
    len++;
  }
  cout << len << endl;

  return 0;
}
