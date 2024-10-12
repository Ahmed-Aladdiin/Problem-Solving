#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;

    long long sum = 1;
    long long pos = -1;
    int count = 0;

    int a;

    for (long long i = 0; i < n; i ++) {
      cin >> a;
      if (!a) continue;
      
      if (count) sum *= i - pos;
      count ++;
      pos = i;
    }
    
    if (!count) sum = 0;
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
