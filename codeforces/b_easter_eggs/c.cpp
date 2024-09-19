#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n; 
    cin >> n;
    string ans = "ROYGBIV";

    for (int i = 7; i < n; i++) {
      ans += ans[i-4];
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
