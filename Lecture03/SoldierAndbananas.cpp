
#include <iostream>
using namespace std;

int main() {
  int k, n, w;
  cin >> k >> n >> w;

  // Cost of One Banana : k
  //  Cost of buying w bananas : k + 2*k + 3*k _ _ _ _ w*k
  // Sum of first w natural number is  : w*(w+1)/2;
  // 1+2+3+4+5 = (5*6)/2 = 15
  // k*(1+2+3+4+5_ _ _ _ _ w) : k*(w*(w+1)/2);

  int TotalCostOfWBananas = k * (w * (w + 1) / 2);

  int MR = TotalCostOfWBananas - n;

  if (MR <= 0) {
    // No money is required print 0.
    cout << 0 << endl;
  } else {
    cout << MR << endl;
  }

  return 0;
}

// Try of convert all the flow charts to code.
// Next Class : Doubt for flow char and then new questions.
