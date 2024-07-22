#include <iostream>
#include <math.h>
#include <map>
using namespace std;

class Solution {
  void solve()
  {
    int n, k;
    cin >> n >> k;

    if (n == 1) {
      cout << 0<< endl;
      return;
    }
    
    map<int, int> m;
    m[1] = 0;
    m[n] = 1;
    int count = 0;

    while (m[1] < n) {
      count ++ ;
      int maxi = m.rbegin()->first;
      m[maxi]--;
      if (m[maxi] == 0) m.erase(maxi);
      if (maxi <= k) {
        m[1] += maxi;
        continue;
      }
      bool fl = false;
      int kkk = ceil (maxi/float(k));
      int kk = max(kkk, k);
      for (int i = 0; i < k- 1; i ++) {
        if (maxi < kk) {
          m[maxi] += 1;
          fl = true;
          break;
        }
        m[kk]++;
        maxi -= kk;
      }
      if (!fl) {
        m[maxi] += 1;
      }
    }
    cout << count << endl;
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
