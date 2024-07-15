#include <iostream>
using namespace std;

void solve() {
  int i;
  cin >> i;

  cout << "Division ";
  if (i >= 1900) cout << 1;
  else if (i >= 1600) cout << 2;
  else if (i >= 1400) cout << 3;
  else cout << 4;
  cout << endl;
}

int main() {
  int it;
  cin >> it;

  while(it--) solve();
  return 0;
}
