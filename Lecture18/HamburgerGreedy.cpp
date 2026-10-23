#include <climits>
#include <cstring>
#include <iostream>
using namespace std;
#define int long long

int32_t main() {

  string recipe;
  cin >> recipe;
  int nb, ns, nc;
  cin >> nb >> ns >> nc;
  int pb, ps, pc;
  cin >> pb >> ps >> pc;
  int r;
  cin >> r;

  // Ek hamburger ko banane me kitne bread,sausage,cheese chahiye.
  int sb = 0, ss = 0, sc = 0;

  for (int i = 0; i < recipe.size(); i++) {
    if (recipe[i] == 'B') {
      sb++;
    } else if (recipe[i] == 'S') {
      ss++;
    } else {
      sc++;
    }
  }

  cout << sb << " " << ss << " " << sc << endl;

  int MFOH = sb * pb + ss * ps + sc * pc;

  // Idea: Make as many hamburger from kitchen as you can.
  int ans = 0; // Till now how many hamburger I have made from kitchen.
  while (true) {

    if (((sb == 0) or (nb == 0)) and ((ss == 0) or (ns == 0)) and
        ((sc == 0) or (nc == 0))) {
      break;
    }

    // Money I need to make the current hamburger :
    int ExtraMoney = 0;
    if (nb < sb) {
      ExtraMoney += (sb - nb) * pb;
    }

    if (ns < ss) {
      ExtraMoney += (ss - ns) * ps;
    }

    if (nc < sc) {
      ExtraMoney += (sc - nc) * pc;
    }

    if (ExtraMoney > r) {
      break;
    }

    r -= ExtraMoney;
    ans++; // Kyuki aapne ek naya hamburger ab bana liya hain.

    // Update the kitchen ke items after making the current hamburger.
    if (nb >= sb) {
      nb -= sb;
    } else {
      nb = 0;
    }

    if (ns >= ss) {
      ns -= ss;
    } else {
      ns = 0;
    }

    if (nc >= sc) {
      nc -= sc;
    } else {
      nc = 0;
    }
  }

  // Now I know how many hamburger I can make from the kitchen ke item.
  ans = ans + (r / MFOH);

  cout << ans << endl;

  return 0;
}
