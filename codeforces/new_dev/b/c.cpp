#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
  void solve()
  {
    int n, k;
    cin >> n >> k;
    int s = ceil((n - k)/2.0);
    int e = ceil(n/2.0);

    int sum = e - s;

    cout << (sum % 2 == 0 ? "YES" : "NO") << '\n';
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
