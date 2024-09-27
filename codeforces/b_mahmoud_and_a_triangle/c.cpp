#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int& i : v) cin >> i;

    sort(v.begin(), v.end());

    for(int i = 0; i < n-2; i ++) {
      if (v[i] + v[i+1] > v[i+2]) {
           cout << "YES"; 
            return;
          }
    } 
      
    cout << "NO";
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
