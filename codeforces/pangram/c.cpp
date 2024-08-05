#include <cctype>
#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int a[26] = {0};
    int n;
    cin >> n;
    
    char c;
    for (int i = 0; i < n; i++) {
      cin >> c;
      a[tolower(c) - 'a']++;
    }

    string ans = "YES";
    for (int i : a) {
      if (!i) {
        ans = "NO";
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
  Solution s;
  s.Solve();
  return 0;
}
