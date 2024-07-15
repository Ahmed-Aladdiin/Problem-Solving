#include <climits>
#include <iostream>
using namespace std;

class Solution {
  void solve()
  {
    int n; 
    cin >> n;

    int maxi = INT_MIN;
    int solution = -1;
    int x = 2;
    while (x < n/2 + 1) {
      int i = 1;
      int sum = 0;
      while (i*x <= n) {
        sum += i*x;
        i++;
      }
      if (sum > maxi) {
        maxi = sum;
        solution = x;
      }
      x++;
    }
    if (maxi < n) solution = n;
    cout << solution << endl;
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
