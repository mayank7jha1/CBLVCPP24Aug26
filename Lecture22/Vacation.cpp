#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1e2 + 3;
int n;
int a[N]{}, b[N]{}, c[N]{};

// F(x,y) : Maximum Happiness from the xth day to 1st day while performing yth
// activity on the xth day.
// F(x,a) : happiness of a on xth day  + max(F(x,b),F(x,c))
// F(x,b) : happiness of b on xth day  + max(F(x,a),F(x,c))
// F(x,c) : happiness of c on xth day  + max(F(x,a),F(x,b))
// F(0,y) : 0;

int F(int x, int y) {
  // Current State : F(x,y) :
  // Stopping Point :
  if (x == 0) {
    // Current State : F(0,y) : 0
    return 0;
  }

  // Current State : F(x,y) : That means you are at the xth day and you are
  // planning to find the maximum happiness from xth day to 1st day by
  // performing some activity{a,b,c} on the xth day.

  int Op1 = 0, Op2 = 0, Op3 = 0;

  if (y == 1) {
    // Aap xth day par activity 1 ko perform kar rahe ho:
    Op1 = a[x] + max(F(x - 1, 2), F(x - 1, 3));
  }

  if (y == 2) {
    // Aap xth day par activity 2 ko perform kar rahe ho:
    Op2 = b[x] + max(F(x - 1, 1), F(x - 1, 3));
  }

  if (y == 3) {
    // Aap xth day par activity 3 ko perform kar rahe ho:
    Op3 = c[x] + max(F(x - 1, 1), F(x - 1, 2));
  }

  // WHat is the answer for the current state : F(x,y) :
  int ans = max({Op1, Op2, Op3});

  return ans;
}

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  // cout << n << endl;

  // Starting Point :
  //  Recursion from Back:
  // Currently I am at the nth day :
  // I have three Options for the nth day :
  // Activitiy A ko represent hum 1 se karenge, b ko 2 se and c ko 3.

  // Maximum Happiness from the nth day to 1st day where on nth day aapne
  // activity a ko kara hain.
  int Op1 = F(n, 1);

  // Maximum Happiness from the nth day to 1st day where on nth day aapne
  // activity b ko kara hain.
  int Op2 = F(n, 2);

  // Maximum Happiness from the nth day to 1st day where on nth day aapne
  // activity c ko kara hain.
  int Op3 = F(n, 3);

  cout << max({Op1, Op2, Op3}) << endl;

  return 0;
}
