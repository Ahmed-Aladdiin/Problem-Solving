#include <cmath>
#include <iostream>
#include <utility>
#include <set>
using namespace std;

class Solution {
  inline double ecuDist(int x, int y, int i, int j) {
    return sqrt(pow((x-i), 2) + pow((y-j), 2));
  }
  void solve()
  {
    int x1, y1, x2, y2;
    int n, x, y, r;
    set<pair<int, int>> generals;
    
    cin >> x1 >> y1 >> x2 >> y2;
    
    if (x1 > x2) swap(x1, x2);
    if (y1 > y2) swap(y1, y2);

    for (int i = x1; i <= x2; i++) {
      generals.insert({i, y1});
      generals.insert({i, y2});
    }
    for (int i = y1 + 1; i < y2; i++) {
      generals.insert({x1, i});
      generals.insert({x2, i});
    }
    // for (pair<int, int> p : generals) 
      // cout << "(" << p.first << ',' << p.second << ") ";

    cin >> n;
    set<pair<int,int>> todel;
    while (n--) {
      cin >> x >> y >> r;
      for (pair<int,int> p : generals) {
        if (ecuDist(p.first, p.second, x, y) <= r) {
          todel.insert({p.first, p.second});
        }
      }
      for (pair<int,int> p : todel) {
        generals.erase({p.first, p.second});
      }
      todel.clear();
    }

    cout << generals.size();
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
