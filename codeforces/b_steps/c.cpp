#include <iostream>
// #include <vector>
using namespace std;

class Solution
{
  long long n, m, i, j, x, y, k, dx, dy;
  long long steps = 0;

  inline bool isValid(long long i, long long j)
  {
    if (
        i <= 0 || j <= 0 ||
        i > n || j > m)
      return false;

    return true;
  }

  long long search(long long dx, long long dy) {
    long long s = 0, e = INT_MAX, mid;
    long long valid = 0;

    while (s <= e) {
      mid = (e-s)/2 + s;
      if (isValid(i+(mid*dx), j+(mid*dy))) {
        s = mid+1;
        valid = mid;
      } else {
        e = mid-1;
      }
    }
    return valid;
  }
  void solve()
  {

    cin >> n >> m >> i >> j >> k;

    x = i;
    y = j;
    while (k--)
    {
      cin >> dx >> dy;

      long long valid = search(dx, dy);
      steps += valid;

      i += (valid*dx); j += (valid*dy);
    }

    cout << steps;
  }

public:
  void Solve()
  {
    int it = 1;
    // cin >> it;
    while (it--)
      solve();
  }
};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); // fast IO // don't use with debugging
  Solution s;
  s.Solve();
  return 0;
}
