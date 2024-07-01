#include <iostream>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  if (k > n) {
    cout << "NO\n";
    return;
  }

  if ((n - k)%2 == 0) {
    cout << "YES\n";
    for (int i = 0; i < k - 1; i ++) {
      cout << "1 ";
    }
    cout << 1 + n - k << endl;
  } else if (2*k <= n && (n - 2*k) % 2 == 0) {
    cout << "YES\n";
    for (int i = 0; i < k - 1; i ++) {
      cout << "2 ";
    }
    cout << 2 + n - 2*k << endl;
  } else cout << "NO\n";
}

int main() {
  int it;
  cin >> it;
  while(it--) {
    solve();
  }
  return 0;
}
