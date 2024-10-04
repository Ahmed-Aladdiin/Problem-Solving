#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    double p, d, t, f, c;
    cin >> p >> d >> t >> f >> c;

    double cu = t * p;
    if (cu >= c || p > d) {
      cout << 0;
      return;
    }

    int count = 0;
    while(true) {
      double dist = p * cu /(d-p) + cu;

      if (dist >= c) break;
      count++;
      cu = dist;

      cu += p * ((dist/d) + f);
    }
    
    cout << count;
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
