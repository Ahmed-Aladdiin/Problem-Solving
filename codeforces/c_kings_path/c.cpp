#include <iostream>
#include <map>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    map<pair<int, int>, bool> m, visited;
    int x, y, xx, yy, n;
    int r, a, b;
    cin >> x >> y >> xx >> yy;
    cin >> n;

    while(n--) {
      cin >> r >> a >> b;
      for (int i = a; i <= b; i++) m[{r, i}] = true;
    }
    
    visited[{x, y}] = true;
    int current = 1, next = 0, steps = 0;

    queue<int> qx, qy;
    qx.push(x); qy.push(y);
    vector<pair<int, int>> directions = \
    {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
    bool found = false;
    
    while(!qx.empty()) {
      int i = qx.front(), j = qy.front();
      qx.pop(); qy.pop();
      current--;
      
      for (pair<int, int> p : directions) {
        if (m[{i + p.first, j + p.second}] && !visited[{i + p.first, j + p.second}])
        {
          next++;
          qx.push(i + p.first);
          qy.push(j + p.second);

          visited[{i + p.first, j + p.second}] = true;

          if (i + p.first == xx && j + p.second == yy) found = true;
        }
        
      }

      if(!current) {
        current = next;
        next = 0;
        steps++;
        if(found) {
          cout << steps;
          return;
        }
      }

      if(found) {
        cout << steps + 1;
        return;
      } 
    }

    cout << -1;
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
