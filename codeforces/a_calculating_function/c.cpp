#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    long long n;
    cin >> n;

    if (n%2) cout << -(n+1)/2;
    else cout << n/2;
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

// 1 -> -1
// 2 -> 1
// 3 -> -2
// 4 -> 2
// 5 -> -3
// 6 -> 3
// 7 -> -4 
