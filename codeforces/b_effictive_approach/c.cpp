#include <iostream>
#include <unordered_map>
// #include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n, t, k, nn;
    cin >> n; nn = n;

    int i = 1;
    unordered_map<int, int> dict;

    while (n--) {
      cin >> k ;
      dict[k] = i++;
    }

    cin >> t;
    long long vas = 0, pet = 0;

    while(t--) {
      cin >> k;
      vas += dict[k];
      pet += (nn - dict[k] + 1);
    }

    cout << vas << ' ' << pet;
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
