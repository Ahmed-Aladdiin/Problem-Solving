#include <climits>
#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;

    int prev = INT_MAX, cur, pre;
    string ans = "maybe";
    for (int i = 0; i < n; i++) {
      cin >> pre >> cur;
      if ( pre != cur ) {
        ans = "rated";
      } else if (pre > prev && ans != "rated") {
        ans = "unrated";
      }
      prev = min(pre, prev);
    }

    cout << ans;
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
