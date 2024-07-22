#include <iostream>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;

    char pre = '1';
    int ones = 0;
    int zeros = 0;
    char temp;

    for (int i = 0; i < n; i++) {
      cin >> temp;
      if (temp == '1') ones++;
      else if (pre == '1') zeros++;
      pre = temp;
    }
    
    string ans = "No";
    if (ones > zeros) ans = "Yes";
    // cout << ones << ' ' << zeros << endl;
    cout << ans << endl;
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
