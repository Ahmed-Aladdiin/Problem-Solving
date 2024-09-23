#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
#include <algorithm>
using namespace std;

class Solution
{
  void solve()
  {
    int n = INT_MIN;
    cin >> n;
    vector<int> v(n);

    long long sum = 0;
    for (int &i : v)
    {
      cin >> i;
      sum += i;
    }

    if (n == 1 || n == 2)
    {
      cout << "-1\n";
      return;
    }

    double ths = (sum / float(n)) / 2.0;

    sort(v.begin(), v.end());
    long long minCount = ceil((n+1) / 2.0);

    if (v[--minCount] < ths)
    {
      cout << "0\n";
      return;
    }

    long long x = (long long)(2 * n) * (long long)(v[minCount]) - sum + 1;
    cout << x << "\n";
  }

public:
  void Solve()
  {
    int it = 1;
    cin >> it;
    while (it--)
      solve();
  }
};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); // fast IO // don't use with debugging
  Solution s;
  s.Solve();
  return 0;
}
