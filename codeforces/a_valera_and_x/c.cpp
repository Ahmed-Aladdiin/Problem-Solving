#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;
    vector<string> s(n);
    for (string & i : s) cin >> i;
    char x = s[0][0], nx = s[0][1];
    string ans = "YES";

    if (x == nx) ans = "NO";
    else for (int i = 0; i < n; i ++) {
      for (int j = 0; j < n; j++) {
        char c;
        if (i == j || j == n - i - 1) c = x;
        else c = nx;
        if (s[i][j] != c) {
          ans = "NO";
          break;
        }
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
