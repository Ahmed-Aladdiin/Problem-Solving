#include <climits>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    int n;
    cin >> n;

    int maxi = INT_MIN, mini = INT_MAX;
    vector<int> v(n);
    set<pair<int, int>> s;

    for (int &i : v) {
      cin >> i;
      if (i > maxi) maxi = i;
      if (i < mini) mini = i;
    }
    
    for (int i : v) {
      s.insert({maxi - i, i - mini});

      if (s.size() > 3) {
        cout << "NO";
        return;
      }
    }
    
    if (s.size() == 3) {
      auto it = s.begin();
      it ++;
      if ((*it).first != (*it).second) {
        cout << "NO";
        return;
      }
    }
    cout << "YES";
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

// 5
// 1 3 3 2 1
// mini = 1, maxi = 3
// {2, 0}, {0, 2}, {1, 1}
//
//
// 5
// 1 2 3 4 5
// mini = 1, maxi = 5
// {4, 0}, {3, 1}, {2, 3}, {1, 3}, {0, 4}
// 4
// 4 2 2 1
// mini = 1, maxi = 4
// {0, 3}, {2, 1}, {3, 0}
