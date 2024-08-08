// #include <algorithm>
#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int count = 0;
    if (a > c && b >= d) count++;
    if (a > d && b >= c) count++;
    if (b > c && a >= d) count++;
    if (b > d && a >= c) count++;

    cout << count << '\n';
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
