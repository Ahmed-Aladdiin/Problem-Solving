#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    vector<pair<int, char>> v = {{0, 'A'}, {0, 'B'}, {0, 'C'}};
    string s;
    for (int i = 0; i < 3; i ++) {
      cin >> s;
      if (s[1] == '<') {
        v[int(s[0] - 'A')].first --;
        v[int(s[2] - 'A')].first ++;
      } else {
        v[int(s[2] - 'A')].first --;
        v[int(s[0] - 'A')].first ++;
      }
    }

    if (!v[0].first && !v[1].first) {
      cout << "Impossible";
      return;
    }
    sort(v.begin(), v.end());
    for (pair<int, char> p : v) {
      cout << p.second;
    }
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
