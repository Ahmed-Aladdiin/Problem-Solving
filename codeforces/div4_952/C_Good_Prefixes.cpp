#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;

    vector<int> vec(n);
    long long count = 0, maxi = INT_MIN, sum = 0;
    for (int & i: vec) {
      cin >> i;
      maxi = (maxi > i)? maxi : i;
      sum += i;
      if (sum == 2 * maxi) count++;
    }
    
    cout << count << endl;
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
