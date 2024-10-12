#include <iostream>
#include <vector>
using namespace std;

vector<int> dp (1000001, 0);

class Solution {
  const int MOD = 1073741824; 
  int d(int s) {
    if (dp[s]) return dp[s];

    int c = 0;

    for (int i = 1; i * i <= s; i++) {
      if (s%i == 0) {
        c++;
        if (i * i != s) c++;
      }
    }

    dp[s] = c;
    return c;
  }
  void solve()
  {
    int a, b, c;
    cin >> a >> b >> c;

    int sum = 0;
    for (int i = 1; i <= a; i++)
      for (int j = 1; j <= b; j++)
        for (int k = 1; k <= c; k++)
          sum = (sum + d(i * k * j)) % MOD;

    cout << sum;
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
