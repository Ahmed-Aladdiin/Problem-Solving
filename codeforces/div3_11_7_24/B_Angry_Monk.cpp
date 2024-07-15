#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> ve(k);
  for (int & i: ve) cin >> i;

  sort(ve.begin(), ve.end());

  int count = 0;
  for (int i = 0; i < k - 1; i++) count += ve[i] * 2 - 1;
  
  cout << count << endl;
}

int main() {
  int it;
  cin >> it;

  while(it--) solve();
  return 0;
}
