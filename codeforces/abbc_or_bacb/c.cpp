#include <functional>
#include <iostream>
#include <string>
#include <set>
using namespace std;

void solve() {
  string s;
  cin >> s;

  int b = 0, groupSize = 0;
  multiset<int, greater<int>> groups;

  for (char c : s) {
    if (c == 'A') groupSize++;
    else {
      b++;
      if (groupSize) {
        groups.insert(groupSize);
      }
      groupSize = 0;
    }
  }
  if (groupSize) groups.insert(groupSize);

  int mini = (groups.size() <  b)? groups.size() : b;
  int result = 0;

  for (auto it = groups.begin(); it != groups.end() && mini--; it++) {
    result += *it;
  }

  /* cout << b << ' ';
  for (int i : groups) cout << i << ' ';
  cout << endl; */
  cout << result << endl;  
}

int main() {
  int it;
  cin >> it;

  while(it--) solve();
  return 0;
}
