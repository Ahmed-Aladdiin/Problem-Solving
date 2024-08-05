#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n, q, l, r;
    cin >> n >> q;
    
    string s1, s2;
    cin >> s1 >> s2;

    vector<vector<int>> diff(26, vector<int> (n+1, 0));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 26; j++) {
        diff[j][i+1] = diff[j][i];
      }
      diff[s1[i] - 'a'][i+1]++;
      diff[s2[i] - 'a'][i+1]--;
    }

    for (int i = 0; i < q; i++) {
      int count = 0;
      cin >> l >> r;
      for (int i = 0; i < 26; i++) {
        count += abs(diff[i][r] - diff[i][l-1]);
      }
      cout << count/2 << endl;
    }
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