#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;

    vector<int> vec(n);
    vector<long long> sum(n, 0);
    int count = 0;
    for (int & i: vec) cin >> i;
    if (!vec[0]) count++;
    bool skip = false;

    for (int i = 1; i < n; i++) {
      skip = false;
      sum[i] = sum[i-1] + vec[i-1];
      if (sum[i] == vec[i]) {
        count++;
        skip = true;
      }
      for (int j = 0; j < i; j++) {
        sum[j] += vec[i];
        if (sum[j] == vec[j] && !skip) {
          count++;
          skip = true;
        }
      }
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
