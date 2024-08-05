#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  void solve()
  {
    int arr[] = {0, 0, 0};
    vector<vector<int>> players(3, vector<int> (0));
    int ind = 0;

    int n, t;
    cin >> n;

    for (int i = 0; i < n; i++) {
      cin >> t;
      arr[t-1]++;
      players[t-1].push_back(i+1);
    }

    int mini = std::min({arr[0], arr[1], arr[2]});

    cout << mini << endl;
    while (mini--) {
      cout << players[0][ind] << ' ' << players[1][ind] << ' ' << players[2][ind]<< endl;
      ind++;
    }
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
  Solution s;
  s.Solve();
  return 0;
}
