#include <cstring>
#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    const char* c = "hello";
    // cout << c == "hello";
    // cout << strcmp(c, "hello");
    if (c == "hello") cout << "yes";
    else cout << "no";
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
