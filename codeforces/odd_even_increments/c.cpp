#include <iostream>
using namespace std;

void solve() {
  bool first, second;
  int n, i;
  cin >> n >> i;
  first = i % 2;
  cin >> i;
  second = i % 2;
  string result = "YES";

  for (int j = 0; j < n - 2; j++) {
    cin >> i;
    if (j%2) {
      if (i % 2 != second) result = "NO";
    } else {
      if (i%2 != first) result = "NO";
    }
  }

  cout << result << endl;
}

int main() {
  int it;
  cin >> it;

  while(it--) solve();
  return 0;
}
