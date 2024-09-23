#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
long long mini(long long x, long long y) {
  if (x > y) return y;
  return x;
}
class Solution {
  void solve()
  {
    int n, f;
    cin >> n >> f;
    
    vector<int> a(n);
    long long  p, l;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
      cin >> p >> l;
      sum += mini(p, l);
      a[i] = mini(2*p, l) - mini(p, l);
    }

    sort(a.begin(), a.end());

    for (int i = n - 1; i >= n - f; i--) {
      sum += a[i];
    }
    
    cout << sum;
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
