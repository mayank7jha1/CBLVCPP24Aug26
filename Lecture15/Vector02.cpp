#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s;
  // This container will have all the properties of dynamic arrays.
  // This is an dynamic array of size 1 as by default vectors are made of
  // size 1 and when it becomes full it will double its size.
  vector<int> v;

  // THis is an array of size 5.
  int a[5];

  // This is an dynamic array of size 5.
  vector<int> v1(5);

  int a1[]{3, 2, 1, 3, 5};
  vector<int> v2{3, 2, 1, 3, 5};

  // This is an array of size 5 whose initial elements are 4,3,1 and then 0,0.
  int a2[5]{4, 3, 1};

  // vector<int> v3(5){4, 3, 1}; // Not Allowed.

  // This is a vector of size 5 whose all the 5 elements will be initialised
  // with value 3.
  vector<int> v3(5, 3);

  int a3[5]{};

  // THis is a vector of size 1 whose only one value is zero.
  vector<int> v4{};

  int n;
  cin >> n;
  int a5[n];
  for (int i = 0; i < n; i++) {
    cin >> a5[i];
  }

  for (int i = 0; i < n; i++) {
    cout << a5[i] << " ";
  }
  cout << endl << "--------------------------" << endl;

  // Learning to take input when the size of the vector is not defined.
  vector<int> v7;
  // cout << v7 << endl; // Error : Container ke case address fetch nahi kar
  // sakte directly.

  // cin ke case me aapko size pata hona chahiye kyuki jab aap cin use kar rahe
  // ho tab vector apna size double nahi karta.
  //
  // Vector is a dynamic array which will double its size only and only when you
  // are inserting elements in vector using a push_back function.
  int m;
  cin >> m;

  //[] : These operators also work in case of vector : Value of
  for (int i = 0; i < m; i++) {
    // cin >> v7[i]; // Not Allowed when the size of the vector is not defined.
    int x;
    cin >> x;
    v7.push_back(x);
  }

  v7.push_back(8);

  // This vector v7 now has 7 elements and its size is 8.

  for (int i = 0; i < 7; i++) {
    cout << v7[i] << " ";
  }

  cout << endl << "------------------------------" << endl;

  vector<int> v8(6);
  for (int i = 0; i < 6; i++) {
    cin >> v8[i];
  }

  for (int i = 0; i < 6; i++) {
    cout << v8[i] << " ";
  }

  cout << endl << "---------------------------------------" << endl;

  return 0;
}
