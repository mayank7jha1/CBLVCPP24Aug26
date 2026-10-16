#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool Compare(string &x, string &y) {
  string xy = x + y; // Append y after x.
  string yx = y + x; // Append x after y.

  if (xy > yx) {
    return true; // Position of x and y are correct just return true.
  } else {
    return false; // Position of x and y are not correct return false and hence
                  // sort stl will swap x and y strings from their respective
                  // position.
  }
}

string largestNumber(vector<int> &a) {
  string ans;

  int flag = 0;
  for (int x : a) {
    if (x != 0) {
      flag = 1;
    }
  }

  if (flag == 0) {
    return "0";
  }

  // Convert you integer input array to string input array.
  vector<string> v;
  // If I want to convert an integer to string : to_string(integer):
  for (int i = 0; i < a.size(); i++) {
    string temp = to_string(a[i]);
    v.push_back(temp);
  }

  if (v[0] == "0") {
    return "0";
  }

  // Bubble Sort : Computation : n*n:
  // STL Ka Sort :

  sort(v.begin(), v.end(), Compare);

  // Iterate over the sorted v vector to get my final string:
  for (int i = 0; i < v.size(); i++) {
    ans += v[i];
  }

  return ans;
}

int main() {

  vector<int> v;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  string ans = largestNumber(v);
  cout << ans << endl;

  return 0;
}

// 0 0 0 0 0  : 0
