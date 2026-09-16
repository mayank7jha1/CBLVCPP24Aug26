#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  // Method 01: There should not be any number is the range of 2 to n-1, that
  // divides the current number n in order for this number to be prime.

  // Starting Point:
  int i = 2;

  // Stopping Point:
  while (i <= (n - 1)) {

    // Task:
    if ((n % i) == 0) {
      // Current number of the range [2,n-1] divides n completely, then what
      // should I do?

      cout << "No" << endl;

      // Agar tumhe kabhi bhi aisa koi i mil gaya jo n ko completely divide
      // karta hain to aap ab next state me aage nahi jaayenge and loop se bahar
      // aajayenge.
      break;
    }

    // Next State:
    i++;
  }

  // Current Issue:Mujhe ye baat nahi pata chal rahi yaha par ki main current
  // line 35 par kaise aaya hu?
  // Main line 35 par kaise aasakta tha?
  // Scenario 01 : When Condition in line 16 fails.
  // Scenario 02 : When I encounter the break or when I am at line number 28.
  // Mera New task : Main yes ko sirf tabhi print karna chahta hu jab main
  // scenario 01 se line number 35 par aaya hu.
  // How do I determine main scenario 01 se bahar aaya hu or scenario 02 se
  // bahar aaya hu?

  // Method 01 for above: Using the Help of Flag variable.

  if (i == n) {
    cout << "Yes" << endl;
  }

  return 0;
}
