#include <iostream>
// #include <vector>
using namespace std;

void solve() {
  int n, k, count = 0;
  char c;
  cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    cin >> c;
    if (c == 'B')
    {
      i++;
      for (int j = 0; j < k - 1 && i < n; j++, i++)
      {
        cin >> c;
      }
      count++;
      i--;
    }
  }
  
  cout << count << endl;
}

int main() {
  int it = 0;
  cin >> it;

  while (it--) {
    solve();
  }

  return 0;
}
