#include <iostream>
#include <vector>
using namespace std;

class Solution {
  vector<vector<int>> graph;
  vector<bool> visited;
  int toDel;

  int dfs(int current, int parent, int count = 0) {
    if (visited[current]) {
      if (count % 2 == 1) toDel++;
      return 1;
    }
    visited[current] = true;

    for (int i : graph[current]) if (i != parent) {
      if (dfs(i, current, count + 1)) return 1;
    } 

    return 0;
  }

  void solve()
  {
    int n, m;
    cin >> n >> m;

    graph = vector<vector<int>>(n);
    visited = vector<bool>(n, false);
    toDel = 0;

    int x, y;
    while (m--) {
      cin >> x >> y;
      x--; y--;

      graph[x].push_back(y);
      graph[y].push_back(x);
    }

    for (int i = 0; i < n; i++) if (!visited[i]) {
      dfs(i, -1); 
    }

    if ((n-toDel)%2 == 1) toDel++;

    cout << toDel;
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
  // ios::sync_with_stdio(false); cin.tie(NULL); // fast IO // don't use with debugging
  Solution s;
  s.Solve();
  return 0;
}
