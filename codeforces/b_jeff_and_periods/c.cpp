#include <iostream>
#include <map>
// #include <vector>
using namespace std;

// template<typename T, typename L, typename M>
// class triple {
// public:
//   T first;
//   L second;
//   M third;
// };

class Solution {
  void solve()
  {
    int n, a, count = 0, dist;
    cin >> n;
    map<int, pair<int, int>> m; 

    for (int i = 0; i < n; i++) {
      cin >> a;
      if (m.find(a) != m.end()) {
        if (m[a].first != -1) {
          dist = i - m[a].first;
          if (m[a].second == 0) {
            m[a].second = dist; 
            m[a].first = i;
          } else {
            if (dist != m[a].second) {
              count--;
              m[a].first = -1;
            } else {
              m[a].first = i;
            }
          }
        }
      } else {
        count++;
        m[a].first = i; m[a].second = 0;
      }
    }

    cout << count  << '\n';
    for (pair p : m) {
      if (p.second.first != -1) {
        cout << p.first << ' ' << (p.second.second) << '\n';
        // cout << p.g
      }
    }
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
