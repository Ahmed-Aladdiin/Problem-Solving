#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

inline double dist(int x, int y, int i, int j) {
  return sqrt(pow(x - i, 2) + pow(y - j, 2));
}

class Solution {
  int n, m, q;
  double x;
  char c;
  void solve()
  {
    vector<bool> exists(26, false);
    vector<double> distances(26, 0); // my dp
    unordered_map<char, vector<pair<int,int>>> keys;
    vector<pair<int,int>> shifts;

    cin >> n >> m >> x;

    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
      cin >> c;
      if (c == 'S') shifts.push_back({i, j});
      else {
        keys[c].push_back({i, j});
        exists[c-'a'] = true;
      }
    }

    int count = 0;
    cin >> q;

    while(q--) {
      cin >> c;
      if (!exists[tolower(c)-'a'] || (isupper(c) && !shifts.size())) {
        cout << "-1\n";
        return;
      }

      if (islower(c)) continue;

      if (distances[tolower(c) - 'a'] > 0.5) {
        if (distances[tolower(c) - 'a'] > x) count++;
        continue;
      }

      double d, mini = INT_MAX;
      for (pair<int, int> l : keys[tolower(c)]) 
        for (pair<int, int> p : shifts) {
        d = dist(l.first, l.second, p.first, p.second);
        if (mini > d) mini = d;
      }

      distances[tolower(c) - 'a'] = mini;
      if (mini > x) count++;
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
