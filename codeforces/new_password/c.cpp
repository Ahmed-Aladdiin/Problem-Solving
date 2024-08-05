#include <iostream>
//#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    string alpha = "";
    for (int i = 0; i < 26; i++) {
      alpha += char('a' + i);
    }
    int n, k;
    cin >> n >> k;
    
    string s = alpha.substr(0, k);
    string password = "";

    while (password.length() < n) password += s;

    cout << password.substr(0, n);
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
