#include <iostream>
using namespace std;

void solve() {
  int n0, n1, n2;
  cin >> n0 >> n1 >> n2;

  if (!n0 && !n1) {
    for (int i = 0; i < n2 + 1; i++) {
      cout << '1';
    }
    cout << endl;
    return;
  }

  while (n0-- + 1) {
    cout << '0';
  }

  if (!n1) {
    cout << endl;
    return;
  } 

  while (n2-- + 1) {
    cout << '1';
  } 

  char c = '0';
  n1--;

  while (n1--) {
    cout << c;
    c = '0' + '1' - c;
  }

  cout << endl;
}

int main() {
  int it;
  cin >> it;

  while (it--) solve();
  return 0;
}
