#include <climits>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#define PI 3.1415926
using namespace std;

double F(double x, double b, double c) {
  double ans = (((x * x) + (b * x) + c) / sin(x));
  return ans;
}

double F1(double x, double b, double c) {
  double ans = (((2 * x) + b) * sin(x)) - (cos(x) * ((x * x) + (b * x) + c));
  return ans;
}

int main() {

  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {

    double b, c;
    cin >> b >> c;

    // Method 4:
    double s = 0, e = PI / 2;
    int count = 0;
    double ans = 0; // This will store my potential answer which is the
    // value of x where f(x) is minimum.

    while (s <= e) {
      double mid = (s + e) / 2;
      if (F1(mid, b, c) > 0) {
        ans = mid;
        e = mid;
      } else {
        ans = mid;
        s = mid;
      }

      count++;
      if (count > 100) {
        break;
      }
    }

    cout << fixed << setprecision(10) << F(ans, b, c) << endl;
  }

  return 0;
}
