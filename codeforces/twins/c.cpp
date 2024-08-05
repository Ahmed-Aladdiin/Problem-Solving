#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n, sum = 0;
    cin >> n;
  
    vector<int> v(n);
    for (int & i: v) {
      cin >> i;
      sum += i;
    }

    sort(v.begin(), v.end());
    int i = n - 1, a = 0;
    for (; i >= 0; i--) {
      a += v[i];
      if (a > sum - a) break;
    }

    cout << n - i;
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
