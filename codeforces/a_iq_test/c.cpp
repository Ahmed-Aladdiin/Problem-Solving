#include <iostream>
#include <vector>
using namespace std;

int main (int argc, char *argv[]) {
  vector<vector<char>> mat(4, vector<char>(4, 'i'));
  for (auto& v : mat) for (char & c : v) cin >> c;

  int s = 0, ss = 0;
  for (int i = 0; i < 3; i ++) 
  {
    for (int j = 0; j < 3; j++) {
      s = ss = 0;
      for (int k = 0; k < 2; k++) 
        for (int m = 0; m < 2; m++)
          (mat[i+k][j+m] == '.') ? s++: ss++;
      if (s != 2) {
        cout << "YES";
        // cout << i << ' ' << k  << ' ' << j << ' ' << m;
        return 0;
      }
    }
  }

  cout << "NO";
  return 0;
}
