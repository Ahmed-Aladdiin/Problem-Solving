#include <iostream>
#include <map>
using namespace std;

class Solution {
  void solve()
  {
    string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
    map<char, int> ind;
    for (int i = 0; i < k.length(); i++) ind[k[i]] = i;

    char dir, r;
    cin >> dir;
    int shift = (dir == 'R') ? -1 : 1;

    string in;
    cin >> in;

    string ans = "";
    for (char c : in) {
      r = k[ind[c] + shift];
      ans += r;
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
  Solution s;
  s.Solve();
  return 0;
}
