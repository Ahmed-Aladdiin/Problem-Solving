#include <iostream>
//#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    long long a, b;
    cin >> a >> b;

    if (b - a >= 10) {
      cout << 0;
      return;
    } else if (!a && !b) {
      cout << 1;
      return;
    } 

    long long result = 1;
    for (long long i = a+1; i <= b; i++) {
      result = (result * (i%10)) % 10;
    }
    cout << result;
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

