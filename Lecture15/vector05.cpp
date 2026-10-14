#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // For each loop : It is a way to iterate over all the elements of a data
  // structure and fetch its value.
  // You cannot change/ Update any value using a for each loop.

  int a[]{3, 2, 1, 5, 9};
  // If I want to print all the elements of the array.

  // for every element of this container/data structure (a) that is going to be
  // represented element by element using a variable of the same type do the
  // following task.
  // What should be the data type of this variable x?
  // What is the data type of every element of the container x is representing.
  //  In this case it is integer.

  // auto : Keyword that replaces itself with the data type it is current
  // representing to.

  for (int x : a) {
    x = x + 1;
    cout << x << " ";
  }

  cout << endl << "------------------" << endl;
  for (auto x : a) {
    cout << x << " ";
  }

  return 0;
}
