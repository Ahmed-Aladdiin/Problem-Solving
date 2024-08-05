#include <climits>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n, mini = INT_MAX, maxi = INT_MIN;
    cin >> n;
    vector<int> v(n);
    for (int & i : v) {
      cin >> i;
      if (mini > i) mini = i;
      if (maxi < i) maxi = i;
    }
    
    int count = 0;
    for (int i : v) {
      if (i > mini && i < maxi) count++;
    }

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
  Solution s;
  s.Solve();
  return 0;
}
