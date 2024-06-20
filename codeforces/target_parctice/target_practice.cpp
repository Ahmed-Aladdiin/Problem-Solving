#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> target = {
       {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 
       {1, 2, 2, 2, 2, 2, 2, 2, 2, 1}, 
       {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
       {1, 2, 3, 4, 4, 4, 4, 3, 2, 1}, 
       {1, 2, 3, 4, 5, 5, 4, 3, 2, 1}, 
       {1, 2, 3, 4, 5, 5, 4, 3, 2, 1}, 
       {1, 2, 3, 4, 4, 4, 4, 3, 2, 1}, 
       {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
       {1, 2, 2, 2, 2, 2, 2, 2, 2, 1}, 
       {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, 
};

void solve() {
  int points = 0;
  char value;

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      cin >> value;
      if (value == 'X')
      {
        points+= target[i][j];
      }
    }
  }
  cout << points << endl;
}

int main() {
  int it = 0;
  cin >> it;

  while (it--)
  {
    solve();
  }
  return 0;
}
