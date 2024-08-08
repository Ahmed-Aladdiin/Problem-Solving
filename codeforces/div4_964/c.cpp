#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n, s, m;
    cin >> n >> s >> m;
    int le = 0, ns; 

    string ans = "NO";
    while (n--) {
      cin >> ns;
      if (ns - le >= s) ans = "YES";
      cin >> le;
    }
    if (m - le >= s) ans = "YES";

    cout << ans << '\n';
  }

public:
  void Solve()
  {
    int it = 1;
    cin >> it;
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
