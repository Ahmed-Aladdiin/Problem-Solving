#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
  void solve()
  {
    int r, c;
    char p;

    cin >> r >> c >> p;
    vector<vector<char>> mat (r+2, vector<char> (c+2, '.'));

    int pi1 = -1, pj1 = -1, pi2, pj2;
    for (int i = 1; i <= r; i++) for (int j = 1; j <= c; j++) {
      cin >> mat[i][j];
      if (mat[i][j] == p) {
        if (pi1 == -1) {
          pi1 = i;
          pj1 = j;
        }
        pi2 = i; 
        pj2 = j;
      }
    }

    int count = 0;
    set<char> ss;
    
    for (int i = pi1; i <= pi2; i++) {
      if (mat[i][pj1 -1] != '.') ss.insert(mat[i][pj1 -1]);
      if (mat[i][pj2 +1] != '.') ss.insert(mat[i][pj2 +1]);
    }
    count += ss.size();
    ss.clear();

    for (int i = pj1; i <= pj2; i++) {
      if (mat[pi1 -1][i] != '.') ss.insert(mat[pi1 -1][i]);
      if (mat[pi2 +1][i] != '.') ss.insert(mat[pi2 +1][i]);
    }
    count += ss.size();

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
  ios::sync_with_stdio(false); cin.tie(NULL); // fast IO // don't use with debugging
  Solution s;
  s.Solve();
  return 0;
}
