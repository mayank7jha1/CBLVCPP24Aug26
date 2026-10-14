#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  // This is a string of size 5 whose all the elements will be .
  string s(5, '.');
  cout << s << endl;

  cout << s.size() << endl;
  cout << s.length() << endl;
  cout << endl << "------------------------" << endl;

  int n;
  cin >> n;

  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    // cin >> v[i];
    int x;
    cin >> x;
    v.push_back(x); // This function will put x at the end of the current
                    // vector.
  }

  v.push_back(12);

  // This above is a vector of size 10 elements.
  cout << v.size() << endl;
  cout << v.capacity() << endl; // Maximum elements this current vector can
                                // hold.

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  return 0;
}
