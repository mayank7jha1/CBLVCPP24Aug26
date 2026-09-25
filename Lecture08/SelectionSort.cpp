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

  // Selection Sort:

  /*
   * Idea:
        For every Task find the minimum in the respective range and put that
        minimum element to its correct position.

        I need to perform the above task n-1 times.
        Hence:
        I need to find the minimum element n-1 times and then put that minimum
        element to its correct position.

        For every Task i : We need to find the minimum element from i to n-1 and
        put that minimum element at the ith index.
  */

  // This Outer Loop represents the current task you are performing:
  for (int i = 0; i <= n - 2; i++) {
    // Current Task : i :
    // Current Task i ka meaning kya hain:
    // Find the minimum from ith index to n-1 th index and swap that ith index
    // element with the minimum element of the array.

    // To initialise mini with i means: ith index se ith index tak ka minimum is
    // a[i].
    int mini = i;

    for (int j = i + 1; j < n; j++) {
      if (a[mini] > a[j]) {
        mini = j;
      }
    }

    // When I am here : Now I have the minimum element from the range i to n-1.
    // swap the element a[i] with a[mini].

    int temp = a[i];
    a[i] = a[mini];
    a[mini] = temp;
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
