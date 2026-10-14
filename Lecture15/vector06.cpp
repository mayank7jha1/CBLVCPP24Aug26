#include <climits>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

void Method01(vector<int> &ans) {
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  return;
}

void Method02(vector<int> &ans) {
  for (int p : ans) {
    cout << p << " ";
  }
  return;
}

void Method03(vector<int> &ans) {

  // What does ans.begin()  gives me : This gives me the address of the first
  // block of the container ans.
  // What does ans.end()  gives me : This gives me the address of the last
  // block + 1  of the container ans.

  // cout << ans.begin() << endl;//NO : you cannot print the address of the
  // containers directly.
  // cout << *(ans.begin()) << endl;

  // Using the normal for loop and iterators i will be iterating over the
  // current container.

  // iterators ke case me aap blindly arithmetic operators use nahi karsakte.
  // it++ or it+=1 or it=it+1 : aap agle block par chale jao:
  // it++ allowed (in case of associative containers)

  // aap start karo it ko ans.begin se and aap aage badhte jao ek ek address
  // using it++ which is overloaded so ye automatically agle address par chala
  // jaata hain and ruk jao jab aap ka address/it / iterator ans.end pr aagaya
  // hain.

  // What is it here ? it is an iterators.
  // iterators are tools that help us to fetch the address of the containers.
  // The simplest form of an iterator is a pointer.
  // Every container will have an iterator of its own except for container
  // adapters.
  //
  // string class ke pass uska khudka iterator hain.
  // vector container ke pass uska khud ka iterator hain.
  // Jab main type define karunga it ka to main ye likhta hu:
  // iterator ko aap khudme ke data type treat kar sakte ho but for different
  // container vo different hoga.

  // Below it is an iterator (data type ) of vector class (vector data type).

  vector<int>::iterator p = ans.begin();

  for (vector<int>::iterator it = ans.begin(); it != ans.end(); it++) {
    cout << *(it) << " ";
  }

  return;
}

int main() {

  vector<int> v{3, 2, 1, 6, 5, 8};

  // You can iterate over any container except for container adapter
  // (stack,queue,priority queue) using a foreach (This is also an Iterator)
  // loop and iterators.

  // Using For Loop:
  Method01(v);
  cout << endl << "----------------------------" << endl;

  // Using For Each Loop:
  Method02(v);
  cout << endl << "----------------------------" << endl;

  // Using Iteators:
  Method03(v);
  cout << endl << "----------------------------" << endl;

  return 0;
}
