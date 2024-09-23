#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n; 
    cin >> n;
    vector<int> v (n), vv(n);

    for (int i = 0; i < n; i++) {
      cin >> v[i];
      vv[i] = v[i];
    }

    sort(vv.begin(), vv.end());

    int s, e;
    for (s = 0; s < n; s++) if (v[s] != vv[s]) break;

    if (s == n) {
      cout << "yes\n" << "1 1";
      return;
    }

    for (e = n-1; e >= 0; e--) if (v[e] != vv[e]) break;

    vector<int> vs(vv.begin() + s, vv.begin() + e + 1);
    reverse(vs.begin(), vs.end());

    if (equal(v.begin() + s, v.begin() + e + 1, vs.begin())) {
      cout << "yes\n" << s+1 << ' ' << e+1;
    } else {
      cout << "no";
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
