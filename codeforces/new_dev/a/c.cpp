#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n, k, a;
    cin >> n >> k;
    int pocket = 0, count = 0;

    while(n--) {
      cin >> a;
      if (a >= k) pocket += a;
      else if (!a && pocket) {
        pocket--;
        count++;
      }
    }

    cout << count << '\n';
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
  ios::sync_with_stdio(false); cin.tie(NULL); // fast IO // don't use with debugging
  Solution s;
  s.Solve();
  return 0;
}
