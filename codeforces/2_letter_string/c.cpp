#include <iostream>
#include <vector>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<string> vec(n);
  for (string &s : vec) cin >> s;
  // for (string s : vec) cout << s << ' ';
  // cout << endl;

  long long count = 0;
  for (int i = 0; i < n -1 ; i++) {
    for (int j = i+1; j < n; j++) {
      if ((vec[i][0] == vec[j][0] && vec[i][1] != vec[j][1]) 
        || (vec[i][1] == vec[j][1] && vec[i][0] != vec[j][0]))
        count++;
    }
  }

  cout << count << endl;
}

int main() {
  int it;
  cin >> it;

  while(it--) solve();
  return 0;
}
