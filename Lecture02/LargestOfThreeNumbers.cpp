#include <iostream>
using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  if ((a > b) and (a > c)) {

    cout << a << "\n";

  } else if ((b > a) and (b > c)) {

    cout << b << "\n";

  } else {

    cout << c << "\n";
  }

  if ((a > b) and (a > c)) {

    cout << a << "\n";
  }

  if ((b > a) and (b > c)) {

    cout << b << "\n";
  }

  if ((c > a) and (c > b)) {

    cout << c << "\n";
  }

  int x{10};

  if (x < 20) {
    cout << "Yup";
  } else if (x < 15) {
    cout << "Yo";
  }

  cout << "\n" << "-------------------------" << "\n";

  if (x < 20) {
    cout << "Yup";
  }

  if (x < 15) {
    cout << "Yo";
  }
}
