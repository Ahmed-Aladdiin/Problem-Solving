#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    string s; int p = -1;
    cin >> s;

    int count = 0;
    for (int i = 0; i < ((int)s.size() - 3); i++) {
      if (s.substr(i, 4) == "bear") {
        count += (i - p) * (s.length() - (i + 3));
        p = i;
        i += 3;
      }
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

// bearaabearc
// 1 * 8 + 6 * 2 = 8 + 12 = 20
