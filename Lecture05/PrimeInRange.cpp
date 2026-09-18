#include <iostream>
using namespace std;

int main() {

  // Print All the prime numbers between 2 to n.
  int n;
  cin >> n;

  // Task : Go to every number from 2 to n and then ask the machine if the
  // current number that you are currently at is prime or not? If it is prime
  // then print the number and if its not prime then move on to the next number.

  for (int cn = 2; cn <= n; cn++) {

    // What is the Current Number : It is represented by variable cn.

    // SubTask: For this Current number cn : Check if this cn is prime or not?
    // If this cn is prime then print this cn else move on to the next value of
    // cn.

    // SubTask : Logic : Go to every number from 2 to square root(cn) and check
    // if there exists any number in the range that divides this cn or not? if
    // there isn't any number then this cn is a prime number.

    int flag = 0; // For every new value of cn : I have made flag as zero
                  // representing that till now this value of cn is considered a
                  // prime number.

    for (int j = 2; j * j <= cn; j++) {
      if ((cn % j) == 0) {
        flag = 1; // This current value of cn is now confirmed as not prime.
        break;
      }
    }

    if (flag == 0) {
      // This current value of cn is a prime number . Print this number:
      cout << cn << " ";
    }


  }

  return 0;
}
