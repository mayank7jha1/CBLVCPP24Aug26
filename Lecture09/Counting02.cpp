#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // Since I want to print the freq of every element :
  //  GO to every element and treat the current element as the target and then
  //  try to find out this current element occurs in the array how many times.

  // Computations : ~n*n
  for (int i = 0; i < n; i++) {
    int ce = a[i];
    // SubIdea: Try to find out how many times this ce occurs in the current
    // array.

    // How many times this current element has occurred in the array till now.
    int count = 0;

    for (int j = 0; j < n; j++) {
      if (a[j] == ce) {
        count++;
      }
    }

    // Now I have the freq of the current element which is count.
    // Print them.

    cout << ce << " " << count << endl;
  }

  return 0;
}

// Jaise hi aap kisi number par aate ho : aap uski frequency dubara nikalte ho
// no matter if you have already calculated the frequency of the current element
// or not.
