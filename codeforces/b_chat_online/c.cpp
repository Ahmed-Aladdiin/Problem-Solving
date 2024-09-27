#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<pair<int,int>> z(p);
    vector<pair<int,int>> x(q);

    for (pair<int,int> & pa : z) cin >> pa.first >> pa.second;
    for (pair<int,int> & pa : x) cin >> pa.first >> pa.second;

    int count = 0;
    bool flag = false;
    for (int i = l; i <= r; i++) {
      flag = false;
      for (auto px : x) {
        for (auto pz: z) {
          if (px.second + i >= pz.first && px.first + i <= pz.second) {
            count++;
            flag = true;
            break;
          }
        }
        if (flag) break;
      }
    }
    cout << count;
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
