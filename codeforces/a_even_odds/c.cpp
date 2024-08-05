#include <iostream>
#include <math.h>
using namespace std;

class Solution {
  void solve()
  {
    long long n, k;
    cin >> n >> k;

    long long odds = ceil(n/2.0), minus = 1;
    if (k > odds) {
      k -= odds;
      minus = 0;
    }
    cout << k * 2 - minus; 
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
