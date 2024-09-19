#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;

    string s, c;
    cin >> s; c = s;
    
    if (n == 1) {
      cout << s;
      return;
    }

    vector<int> pointers = {0, n-1};
    int i = 1, k = n;

    while(k--) {
      c[pointers[i]] = s[k];
      pointers[i] += (1- i) - i;
      i = 1 - i;
    }

    cout << c;
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
