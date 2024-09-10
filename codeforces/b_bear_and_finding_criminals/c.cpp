#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n, a;
    cin >> n >> a;

    vector<int> v (n);
    for (int & i : v) cin >> i;

    int left_len = a - 1, right_l = n - a;
    int mini = min(left_len, right_l);
    int start = a - mini - 1, end = a + mini + 1;
    int sum = v[a-1];

    for (int i = 1; i <= mini; i ++) {
      if (v[a-i-1] + v[a+i-1] == 2) sum += 2;
    }

    for (int i = 0; i < start; i ++) sum += v[i];
    for (int i = n -1; i >= end - 1; i --) sum += v[i];

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
