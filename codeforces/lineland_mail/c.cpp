#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;

    vector<int> nu(n);
    for (int & i : nu) cin >> i;

    cout << abs(nu[0]-nu[1]) << ' ' << abs(nu[0]-nu[n-1]) << endl;
    for (int i = 1; i < n-1; i++) {
      int mini = min(abs(nu[i]-nu[i-1]), abs(nu[i]-nu[i+1]));
      int maxi = max(abs(nu[i]-nu[0]), abs(nu[i]-nu[n-1]));
      cout << mini << ' ' << maxi << endl;
    }
    cout << abs(nu[n-1]-nu[n-2]) << ' ' << abs(nu[0]-nu[n-1]);
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
  Solution s;
  s.Solve();
  return 0;
}
