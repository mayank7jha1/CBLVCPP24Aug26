#include <climits>
#include <cstdio>
#include <iostream>

using namespace std;

// Motivation : User is going to give you some integers and you
// are required to find the maximum, minimum and sum of those some integers.

int main() {

  // Idea : We will take input from the user one by one and for every new number
  // that the user is going to give I will update my maximum, minimum and sum
  // till the current number.

  // Starting Point:
  int x;

  int maxima = INT_MIN;
  int minima = INT_MAX;
  int sum = 0;

  // long long minima = LLONG_MAX;

  // cout << minima << endl;

  // Overflow:
  //  minima++;

  // cout << minima << endl;

  // Ending Point:
  while (cin >> x) {

    // Update the maxima, minima and sum till this current value of x.
    if (maxima < x) {
      maxima = x;
    }

    if (minima > x) {
      minima = x;
    }

    sum += x;
  }

  cout << sum << " " << maxima << " " << minima << endl;

  return 0;
}
