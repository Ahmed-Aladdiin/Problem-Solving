#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
inline void printVec(vector<T> v) {
  for (T i : v) cout << i << ' ';
  cout << '\n';
}

class Solution {
  int n, m, k, t;
  inline int pos(int x, int y) {
    return (x - 1) * m + y; 
  }
  int get(int t, vector<int> & v) {
    int count= 0;
    for (int & i : v)  {
      if ( i > t) break;
      if (i == t)
        return -2;
      count ++;
    }
    return count;
  }
  void solve()
  {
    cin >> n >> m >> k >> t;
    // vector<short int> v(n*m + 1, 0);
    vector<int> v(k);
    vector<string> ans = {"Grapes", "Carrots", "Kiwis"};

    int a, b;
    while(k--) {
      cin >> a >> b;
      v[k] = pos(a,b);
    }

    sort(v.begin(), v.end());
    

    while(t--) {
      cin >> a >> b;
      k = get(pos(a, b), v);
      if (k == -2) {
        cout << "Waste\n";
        continue;
      }
      k = pos(a, b) - k;
      cout << ans[k%3] << '\n';
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
