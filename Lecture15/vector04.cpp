#include <iostream>
#include <string>
#include <vector>
using namespace std;

// This ans is local to Solve and is passed by value from main.
void Solve(vector<int> ans) {
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
  ans[2] = 100;
  return;
}

// This ans is a reference vector to the original vector v defined in main so
// all the changes made in answer will be reflected in v vector also.
// You have not created a new vector as ans is a reference to v.
void Solve02(vector<int> &ans) {
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
  ans[2] = 890;
  return;
}

// This is a function of type vector<int> hence it is returning a vector from
// this function F.
vector<int> F(vector<int> &ans) {
  // return (this should be a vector)
  vector<int> m{2, 2, 2, 2, 2, 3, 3, 1};
  return m;
}

int main() {

  vector<int> v{7, 6, 5, 1, 2}; // Sequence Container.
  vector<int> v1 =
      v; // All the content of vector v will be now copied in vector v1.

  Solve02(v);
  cout << v[2] << endl;

  vector<int> p = F(v);
  for (int i = 0; i < p.size(); i++) {
    cout << p[i] << " ";
  }
  cout << endl;
}
