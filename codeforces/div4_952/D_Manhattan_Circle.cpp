#include <iostream>
using namespace std;

class Solution {
  void solve()
  {
    int n, m;
    cin >> n >> m;
    
    int col = 0, row = 0;
    int min_col = m;
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= m; j++) {
        char c;
        cin >> c;
        if (!col && c == '#') col = j;
        if (c == '#' && j <= min_col) {
          row = i;
          min_col = j;
        }
      }

    cout << row << ' ' << col << endl;
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
