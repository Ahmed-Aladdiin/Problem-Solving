#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int size = n * m;
  string ans = "#Black&White";
  while (size--) {
    char c;
    cin >> c;
    if (c != 'W' && c != 'B' && c != 'G') {
      ans = "#Color";
    }
  }

  cout << ans;
  return 0;
}
