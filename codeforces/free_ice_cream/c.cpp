#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    long long n, k;
    cin >> n >> k;

    int count = 0;
    while(n--) {
      char c; long long t;
      cin >> c >> t;

      if (c == '+') k += t;
      else {
        if (t<= k) k -= t;
        else count++;
      }
    }

    cout << k << ' ' << count;
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
