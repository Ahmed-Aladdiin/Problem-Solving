#include <iostream>
#include <queue>
// #include <vector>
using namespace std;

class Solution
{
  void solve()
  {
    int n, maxi, temp;
    priority_queue<int> pq;
    cin >> n;
    maxi = n;

    for (int i = 0; i < n; i++)
    {
      cin >> temp;
      pq.push(temp);
      while (!pq.empty() && maxi == pq.top())
      {
        cout << pq.top() << " ";
        pq.pop();
        maxi--;
      }
      if ( i != n - 1) cout << endl;
    }
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
  Solution s;
  s.Solve();
  return 0;
}
