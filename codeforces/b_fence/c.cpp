#include <climits>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n, k, mini = INT_MAX, pos = 0;
    cin >> n >> k;

    vector<long long> v (n+1, 0);
    for (int i = 1; i <= n; i++) {
      cin >> v[i];
      v[i] += v[i-1];
      if (i >= k && mini > v[i] - v[i - k]) {
        mini = v[i] - v[i - k];
        pos = i - k + 1;
      }
    }

    cout << pos;
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
