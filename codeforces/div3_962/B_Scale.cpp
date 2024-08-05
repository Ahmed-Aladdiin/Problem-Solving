#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  void solve()
  {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> nn(n, vector<int>(n));
    vector<vector<int>> kk(n / k, vector<int>(n / k));

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        char c;
        cin >> c;
        nn[i][j] = c - '0';
      }
    }

    for (int i = 0; i < n; i += k)
      for (int j = 0; j < n; j += k)
      {
        kk[i / k][j / k] = nn[i][j];
      }

    for (vector<int> &i : kk)
    {
      for (int j : i)
      {
        cout << j;
      }
      cout << endl;
    }
  }

public:
  void Solve()
  {
    int it = 1;
    cin >> it;
    while (it--)
      solve();
  }
};

int main()
{
  Solution s;
  s.Solve();
  return 0;
}
