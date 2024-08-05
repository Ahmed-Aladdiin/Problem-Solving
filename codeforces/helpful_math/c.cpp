#include <iostream>
#include <vector>
using namespace std;

class Solution {
  void solve()
  {
    string s;
    cin >> s;

    int arr[3] = {0, 0, 0};
    for (int i = 0; i < s.length(); i+=2) {
      arr[s[i]-'1'] += 1;
    }
    s = "";
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < arr[i]; j++) {
        s += char('1' + i);
        s += '+';
      }
    }
    cout << s.substr(0, s.length() -1);
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
