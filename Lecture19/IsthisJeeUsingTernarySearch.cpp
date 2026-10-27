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

int main() {

  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {

    double b, c;
    cin >> b >> c;

    // Method 2:
    double s = 0, e = PI / 2;

    double ans = 0; // This will store my potential answer which is the
    // value of x where f(x) is minimum.

    while (e - s > (1e-6)) {

      double m1 = s + (e - s) / 3;
      double m2 = e - (e - s) / 3;

      if (F(m1, b, c) > F(m2, b, c)) {
        ans = m2;
        s = m1;
      } else if (F(m1, b, c) < F(m2, b, c)) {
        ans = m1;
        e = m2;
      } else {
        ans = m1;
        s = m1;
        e = m2;
      }
    }

    cout << fixed << setprecision(10) << F(ans, b, c) << endl;
  }

  return 0;
}
