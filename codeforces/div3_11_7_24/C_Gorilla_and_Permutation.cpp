#include <iostream>
#include <vector>
using namespace std;

void solve() {
  int n, m, k;
  cin >> n >> m >>k;
  vector<int> vec;

  while(n > k) {
    vec.push_back(n--);
  }
  while(n > m) {
    vec.push_back(n--);
  }
  int i = 1;
  while(i <= n) vec.push_back(i++);

  for (int i : vec) cout << i << ' ';
  cout << endl;
}

int main() {
  int it;
  cin >> it;
  
  while(it--) solve();
  return 0;
}
