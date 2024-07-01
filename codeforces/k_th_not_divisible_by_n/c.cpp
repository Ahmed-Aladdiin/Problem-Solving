#include <iostream>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  if (k < n) {
    cout << k << endl;
    return;
  }

  int n1 = (k / (n-1)) * n, n2 = k % (n-1), result;
  if (!n2) {
    result = n1 -1;
  } else {
    result = n1 + n2;
  }
  cout << result << endl;
}

int main() {
  int it; 
  cin >> it;

  while(it--) solve();
  return 0;
}
