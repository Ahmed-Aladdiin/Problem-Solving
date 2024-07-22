#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;
    vector<int> ans;
    vector<int> trr;

    int maxi = 0;
    int i = (n%2)? 1 : 2;
    map<int, true> used;

    for (; i<= n; i++) {
      int cur = i;
      trr.clear();
      trr.push_back(i);

      for (int j = i + 1; j <= n; j++) {
        if ((j | cur) == n) {
          trr.push_back(j);
          cur = j;
          if (used[j]) break;
        }
      }
      if 
    }
  }

public:
  void Solve()
  {
    int it;
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
