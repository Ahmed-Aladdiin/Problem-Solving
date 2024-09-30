#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
  void solve()
  {
    int n, m, s, g, dist;
    char c;
    set<int> x;

    cin >> n >> m;

    while(n--) {
      for (int i = 0; i < m; i ++){
        cin >> c;
        if (c == 'S') s = i;
        else if (c == 'G') g = i;
      }

      dist = s - g;
      if (dist < 0) {
        cout << -1;
        return;
      }

      x.insert(dist);
    }

    cout << x.size();
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
