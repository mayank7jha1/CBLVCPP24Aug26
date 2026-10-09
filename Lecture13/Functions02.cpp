#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Pass By Value : Variables a and b here are passed by value and are local to
// function sum.
// Here you have created two new variables a and b.
int Sum(int a, int b) {
  int ans = a + b;
  a = 93; // This a is local to this function Sum. All the changes done inside
          // this a will not reflect outside this sum function.
  cout << "Inside Sum : " << a << endl;
  cout << "-----------------------------" << endl;
  return ans;
}

// Pass By Address: Variable a and b here are local to Difference function but
// these variables store address of the variable passed in the function call .
// Hence this a and b should be pointer variable as you cannot store an address
// inside a normal variable.

// Hence this a--->8040 and this b stores : 2030 which are the addresses of the
// variable a and b defined inside the main function.
//
// Hence a is a pointer variable and b is also a pointer variable which is
// defined locally inside the Difference Function.
// You have here created two new pointer variables a and b.
int Difference(int *a, int *b) {

  // Cout<<a--->8040 and cout<<b --->2030.
  // Value at address 8040 (10) - Value at address 2030(90).
  int ans = (*a) - (*b);

  (*a) = 93; // Value at address 8040 ko aap 93 bana do. Even though you have
             // made changes here it will be reflected inside the main function
             // as you are doing the work on the original main variable address.

  cout << "Inside Difference : " << *a << endl;
  cout << "-----------------------------" << endl;
  return ans;
}

// Pass By Reference: Now x and y are reference of the variable a and b defined
// inside the main block.
// x and y are alias of a and b.
// This is the fastest : Here you are not creating any sort of copy or new
// variable.
// I have not created x and y as new variables.
int Multiply(int &x, int &y) {

  int ans = x * y;
  x = 193;

  cout << "Inside Multiply : " << x << endl;
  cout << "-----------------------------" << endl;

  return ans;
}

int main() {

  int a, b;
  cin >> a >> b;

  // cout << a + b << endl;

  // Pass By Value:

  //  What are we passing inside the function sum: We are passing the values of
  //  the variables a and b i.e. 10 and 90.
  //  It is same as writing Sum(10,90):
  cout << Sum(a, b) << endl;
  // As soon as the function call is over all the buckets/changes done inside
  // the function will no longer be in program memory.

  cout << "Inside Main : " << a << endl;
  cout << "-----------------------------------" << endl;

  // Pass By Address:

  // You are passing the address of the variable inside the function call
  // instead of the values of the variables.

  // Lets say: a-->value is 10 and b-->value is 90.
  // a-->Address is : 8040 and b --> Address is 2030.
  //
  // Difference(8040,2030):
  cout << Difference(&a, &b) << endl;
  cout << "Inside Main : " << a << endl;
  cout << "-----------------------------------" << endl;

  // Passing By Reference:
  // Currently a is 93 and b is 90.

  cout << Multiply(a, b) << endl;
  cout << "Inside Main : " << a << endl;
  cout << "-----------------------------------" << endl;

  // If I print x and y here : I will get an error as even though x and y are
  // alias of a and b but they are local to their respective blocks.

  return 0;
}
