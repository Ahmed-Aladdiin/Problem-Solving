#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class Solution
{
  int max;
  void solve(int remain, vector<int> &vec)
  {
    if (!remain)
    {
      int result = vec[0] * vec[1] * vec[2];
      if (result > max)
        max = result;
      return;
    }

    for (int i = 0; i < 3; i++)
    {
      vec[i]++;
      solve(remain-1, vec);
      vec[i]--;
    }
  }

public:
  void Solve()
  {
    vector<int> vec(3);
    for (int &i : vec)
      cin >> i;
    max = INT_MIN;
    solve(5, vec);
    cout << max << endl;
  }
};

int main()
{
  Solution s;
  int it;
  cin >> it;
  while (it--)
    s.Solve();
  return 0;
}
