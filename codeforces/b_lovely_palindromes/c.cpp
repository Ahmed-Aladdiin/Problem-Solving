#include <algorithm>
#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    string s, ss;
    cin >> s;
    ss = s;
    reverse(s.begin(), s.end());

    ss += s;
    cout << ss;
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
