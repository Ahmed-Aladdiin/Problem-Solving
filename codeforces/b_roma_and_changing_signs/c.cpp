#include <cstdlib>
#include <iostream>
#include <set>
using namespace std;

class Compare {
public:
  bool operator() (int i, int j) const {
    return abs(i) > abs(j);
  }
};

class Solution {
  void solve()
  {
    multiset<int, Compare> s;
    int n, k, t;
    cin >> n >> k;

    while(n--) {
      cin >> t;
      s.insert(t);
    }
    
    t = 0;
    long long sum = 0;
    for (auto it = s.begin(); it != --(s.end()); it++) {
      n = *it;
      if (n < 0 && t < k) {
        n = -n;
        t++;
      }
      sum += n;
    }

    n = *s.rbegin();
    if (t < k) {
      t = k - t;
      if (t%2 == 1) n *= -1;
    }
    sum += n;

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
