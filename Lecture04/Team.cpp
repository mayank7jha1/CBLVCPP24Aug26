#include <iostream>
using namespace std;
#define endl "\n"

int main() {

  int n; // Number of Questions:
  cin >> n;

  // Task: For these n questions take input of the three friends on whether they
  // will be able to solve the current problem or not.

  // Repeat Statement : Because We need to take input of n question.

  // In Question Terms :
  //  What does this i represent: This i is the counter
  // telling me which question of the programming contest you are currently
  // solving.
  int i = 1; // Starting Point:

  int ans{0}; // This is a variable that tells me how many questions i have
              // solved till now in the programming contest.

  int x, y, z; // These 3 variables will be created only once .

  // Stopping Point:
  while (i <= n) {

    // Subtask : For the current question take input of the three friends:
    // For every new value of i : these 3 variables are being created.

    // int x, y, z;
    // Values of x,y,z are being updated for every new value of i.
    cin >> x >> y >> z;

    int sum = x + y + z;

    if (sum >= 2) {
      // This question can now be solved.
      ans++;
    }

    // Next State:
    i++;
  }

  cout << ans << endl;

  return 0;
}
