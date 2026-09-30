#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  // Number of test cases:
  int t;
  cin >> t;

  for (int l = 1; l <= t; l++) {

    // Currently You are solving test case number l:
    // Question : For this test case you will be given a value n
    // and an array of size n, then you need to find out if there
    // exists a triplet whose sum ka last digit is 3 or not.

    int n;
    cin >> n;

    // Step 01: Build the last digit array of n size.

    int a[n]; // This a array stores the last digit of every number given to us
              // by the user.
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      // Store the last digit instead of the number:
      a[i] %= 10;
    }

    // Step 02 : Build the freq array storing which last ka digit is occurring
    // how many times  and I will not store the extra frequency of a last digit
    // i.e. if any digit is occurring more than 3 times then I will not update
    // its frequency.
    int freq[10]{};
    // Freq[i] : min(Actual occurrence of last ka digit, 3):

    for (int i = 0; i < n; i++) {
      int ld = a[i];

      if (freq[ld] < 3) {
        freq[ld]++;
      }
    }

    // Step 03:
    //  Build the reduced array from the freq array as now you know which digit
    //  occurs how many time to contribute in answer.

    // Maximum Size of this array can only be 30.
    // Will this array always be of 30 size?
    int b[30]{};
    int size{0}; // This will store the size of the b array for the current test
                 // case and since right now I don't know the exact size I am
                 // initialising it with 0.
                 // THis size ek tarah se current index jaha par new element
                 // aayega uski tarah bhi work kar raha hain.

    // Build the b array from the freq array:

    for (int i = 0; i < 10; i++) {
      // In frequency array : i : last ka digit
      // freq[i] : last ka digit kitni bar aaya hain.

      int currentDigit = i;
      int NumberOfOccurrence = freq[i];

      // You have to put this currentDigit NumberOfOccurrence times in the b
      // array.

      for (int j = 1; j <= NumberOfOccurrence; j++) {
        b[size] = currentDigit;
        size++; // next time jo aapko ye currentDigit daalna hain ye aapko agle
                // index par daalna hain.
      }
    }

    // Now we have the b array whose size is stored in variable size and on
    // which you can apply the triplet ka logic.

    // This will tell you ki for the given test case you have found
    //  a triplet or not.
    int flag = 0;
    // Computations : ~n*n*n
    for (int i = 0; i < size - 2; i++) {
      for (int j = i + 1; j < size - 1; j++) {
        for (int k = j + 1; k < size; k++) {
          if ((b[i] + b[j] + b[k]) % 10 == 3) {
            flag = 1;
            cout << "YES" << endl;
            break;
          }
        }
        if (flag == 1) {
          break;
        }
      }
      if (flag == 1) {
        break;
      }
    }

    if (flag == 0) {
      cout << "NO" << endl;
    }
  }

  return 0;
}
