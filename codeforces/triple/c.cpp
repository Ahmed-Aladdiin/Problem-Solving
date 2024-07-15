#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve() {
  int n;
  cin >> n;
  
  vector<int> v(n);
  for (int & i: v) cin >> i;

  if (n < 3) {
    cout << -1 << endl;
    return;
  } 

  map<int, int> m;

  for (int i : v) {
    m[i]++;
    if (m[i] >= 3) {
      cout << i << endl;
      return;
    }
  }
  
  cout << -1 << endl;
  return;

}

int main() {
  int it;
  cin >> it;

  while(it--) solve();
  return 0;
}
