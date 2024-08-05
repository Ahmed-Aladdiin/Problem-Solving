#include <iostream>
#include <math.h>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n, t;
    cin >> n >> t;

    long long mini = pow(10, n-1), maxi = pow(10, n);
    long long start = mini/t;

    while(start*t < mini && start * t < maxi) start++;
    long long ans = start * t;

    if (ans >= mini && ans < maxi && ans > 0) cout << ans;
    else cout << -1;
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
