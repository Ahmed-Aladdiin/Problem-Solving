#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;
    cout << (n%4)/2 + n/4 << endl;
  }

public:
  void Solve()
  {
    int it = 1;
    cin >> it;
    while(it--) solve();
  }
};

int main()
{
  Solution s;
  s.Solve();
  return 0;
}
