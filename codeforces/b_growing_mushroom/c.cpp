#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <utility>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    double n, t1, t2;
    double k, a, b;
    map<double, set<int>> order;
    cin >> n >> t1 >> t2 >> k;
   
    int i = 1;
    k = 100 - k;
    while(n--) {
      cin >> a >> b;
      
      double time = a * t1 * (k/100.0) + b * t2;
      double time2= b * t1 * (k/100.0) + a * t2;
      if (time < time2) time = time2;
      order[time].insert(i++);
    }
    
    for (auto it = order.rbegin(); it != order.rend(); it++) {
      for (auto it2 = it->second.begin(); it2 != it->second.end(); it2++) {
        cout << *it2 << ' ' << fixed << setprecision(2) << it->first << '\n';
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
