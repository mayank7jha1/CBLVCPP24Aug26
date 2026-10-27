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
    double Jump = 1e-6;
    double MinimumValue = 1e18;

    for (double x = Jump; x <= PI / 2; x += Jump) {
      double Currentvalue = F(x, b, c);
      MinimumValue = min(MinimumValue, Currentvalue);
    }

    cout << fixed << setprecision(10) << MinimumValue << endl;
  }

  return 0;
}
