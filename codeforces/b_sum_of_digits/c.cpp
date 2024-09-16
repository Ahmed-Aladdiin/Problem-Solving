#include <iostream>
// #include <vector>
using namespace std;

class Solution {
  inline int digitSum(int n) { if (n <= 9) return n ; else return n/10 + n%10; }
  void solve()
  {
    string s;
    cin >> s;

    if (s.length() == 1) {
      cout << 0 ;
      return;
    }

    int num = int(s[0] - '0') * 10 + int(s[1] - '0'), count = 0;
    do {
      num = digitSum(num);
      count ++;
    } while (num > 9);

    for (int i = 2; i < s.length(); i++) {
      num += int(s[i] - '0');
      while (num > 9) {
        num = digitSum(num);
        count ++;
      }
    }

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
