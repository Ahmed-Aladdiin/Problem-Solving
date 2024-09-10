#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n; 
    cin >> n;

    vector<int> v (n+1);
    for (int i = 1; i <= n; i ++) cin >> v[i];

    int energy = 0, cost = 0;

    for (int i = 0; i < n; i++) {
      int add = v[i] - v[i+1];
      energy += add; 

      if (energy < 0) {
        cost -= energy;
        energy = 0;
      }
    }

    cout << cost;
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
