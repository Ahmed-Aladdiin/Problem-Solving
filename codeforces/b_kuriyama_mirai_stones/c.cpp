#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;

    vector<vector<long long>> v (2, vector<long long>(n+1, 0));

    for (int i = 1; i <= n; i++) {
      cin >> v[0][i];
      v[1][i] = v[0][i];
    }

    sort(v[1].begin(), v[1].end());

    for (int i = 1; i <= n; i++) {
      v[0][i] += v[0][i-1];
      v[1][i] += v[1][i-1];
    }

    cin >> n;
    int type, l, r;

    while (n--) {
      cin >> type >> l >> r;
      cout << v[type-1][r] - v[type-1][l-1] << '\n';
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
