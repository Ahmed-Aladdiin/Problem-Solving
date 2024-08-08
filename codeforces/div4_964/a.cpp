#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    string s;
    cin >> s;
    int a = s[0] - '0', b = s[1] - '0';
    cout << a + b << '\n';
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
