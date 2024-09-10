#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  void solve()
  {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> v(m);
    for (pair<int, int> & p : v) {
      cin >> p.second;
      cin >> p.first;
    }

    sort (v.begin(), v.end(), greater<pair<int, int>>());
    
    int sum = 0;
    for(pair<int, int> p : v) {
      int mini = min(n, p.second);
      n -= mini;
      sum += mini * p.first;
      if (!n) break;
    }

    cout << sum;
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
