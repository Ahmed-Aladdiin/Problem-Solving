#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

inline bool grater(int x, int y) {
  return x > y; 
}

inline bool minimum(int x, int y) {
  return x < y;
}

class Solution {
  inline void input(double & key, bool(*compare)(int, int)) {
    int n, tmp;
    cin >> n;
    while(n--) {
      cin >> tmp;
      if (compare(tmp, key)) key = tmp;
    }
  }
  

  void solve()
  {
    double a, b, r = INT_MIN, p = INT_MIN, p2 = INT_MAX;

    input(r, grater);
    input(p, grater);
    input(p2, minimum);

    cin >> a >> b;

    double x = b * p, y = a * p2;
    double r2 = r * sqrt((x/(y+x)));

    cout << fixed << setprecision(15) << r2;
  }

public:
  void Solve()
  {
    int it = 1;
    // cin >> it;
    while(it--) solve();
  }
};

int main()
{
  ios::sync_with_stdio(false); cin.tie(NULL); // fast IO // don't use with debugging
  Solution s;
  s.Solve();
  return 0;
}
