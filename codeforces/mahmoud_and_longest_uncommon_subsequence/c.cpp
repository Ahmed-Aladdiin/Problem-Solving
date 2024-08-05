#include <algorithm>
#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  // int solve()
  // {
    
  // }

public:
  void Solve()
  {
    string s1, s2;
    cin >> s1 >> s2;
    
    if (s1 == s2) {
      cout << -1;
    } else {
      if (s1.length() > s2.length()) {
        cout << s1.length();
      } else cout << s2.length();
    }
  }
};

int main()
{
  Solution s;
  s.Solve();
  return 0;
}
