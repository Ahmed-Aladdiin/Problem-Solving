#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    string s, t;
    cin >> s >> t;

    if (t.length() > s.length()) cout << "NO" << '\n';
    int i = 0, j = 0;

    while (i < s.length()) {
      if (j >= t.length()) {if (s[i] == '?') s[i] = 'a';}
      else {
        if (s[i] == t[j]) j++;
        else if (s[i] == '?') {
          s[i] = t[j];
          j++;
        }
      }
      i++;
    }
    
    if (j >= t.length()) {
      cout << "YES\n" << s << '\n';
    } else {
      cout << "NO\n";
    }
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
