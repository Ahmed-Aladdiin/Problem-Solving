#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n, m;
    cin >> n >> m;

    map<int, set<int>> freq;
    vector<pair<int, int>> v;

    int a, b;
    while(m--) {
      cin >> a >> b;
      freq[a].insert(b);
      freq[b].insert(a);
    }

    int count = 0;
    bool flag = false;

    do {
      flag = false;

      for(pair<int, set<int>> p : freq) {
        if(p.second.size() == 1) {
          flag = true;
          v.push_back({*(p.second.begin()), p.first});
        }
      }

      for (pair<int, int> p : v) {
        freq[p.first].erase(p.second);
        freq.erase(p.second);
      }
      
      if (flag) count ++;
    } while (flag);

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
