#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int n, tt;
  cin >> n >> tt;

  int a[n + 1]{};
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  // Computations : ~n*n : 10^5*10^5: 10^10 : Which will not run in 1 sec.
  
  //  Idea: Go to every Starting Point and try to find out the maximum number of
  //  books you can read from this starting point and across all the starting
  //  points maximum value is your final answer.

  int ans = INT_MIN; // Across all the starting points the maximum number of
                     // books you can read.

  for (int sp = 1; sp <= n; sp++) {
    int tc = 0; // For this starting point the amount of time you can consumed
                // while reading books is stored in tc.
    int count = 0; // From this starting point the number of books you are able
                   // to read is stored in count.

    // SubIdea: From this starting point try to find out how many books you can
    // read.

    for (int ep = sp; ep <= n; ep++) {
      tc += a[ep];
      if (tc > tt) {
        // YOu cannot read this current book
        break;
      }

      // YOu are able to read the current book.
      count++;
    }

    // Now I know how many books I am able to read from this current starting
    // point.
    // Since I need the maximum across all the starting points:
    ans = max(ans, count);
  }

  cout << ans << endl;

  return 0;
}
