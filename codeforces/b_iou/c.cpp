#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n, m;
    int a, b, c;
    cin >> n >> m;

    vector<int> v (n+1);
    while (m--) {
      cin >> a >> b >> c;

      v[a] += c;
      v[b] -= c;
    }

    long long sum = 0;
    for (int p : v) {
        sum += p > 0 ? p : 0;
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
