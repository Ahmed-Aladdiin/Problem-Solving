#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n, p, q;
    cin >> n >> p;
    vector<bool> passed(n, false);

    for (int i = 0; i < p; i++)  {
      cin >> n;
      passed[n-1] = true;
    }

    cin >> q;
    for (int i = 0; i < q; i++)  {
      cin >> n;
      passed[n-1] = true;
    }

    string ans = "I become the guy.";
    for (bool b : passed) {
      if (!b) {
        ans = "Oh, my keyboard!";
        break;
      }
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
