#include <iostream>
using namespace std;

class Solution {
  void solve()
  {
    string s, w;
    cin >> s >> w;

    char temp = w[0];
    w[0] = s[0];
    s[0] = temp;

    cout << s << ' ' << w << endl;
  }

public:
  void Solve()
  {
    int it;
    cin >> it;

    while(it--) solve();
  }
};

int main()
{
  Solution s;
  s.Solve();
  return 0;
}
