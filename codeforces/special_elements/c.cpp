#include <iostream>
#include <vector>
using namespace std;

void solve() {
  int a;
  cin >> a;

  if (a == 1) {
    cin >> a;
    cout << "0\n";
    return;
  }
  vector<int> vec(a);
  vector<int> visited(8000, false);

  for (int & i: vec) cin >> i;

  int count = 0, l, r, sum;

  for(int i = 0; i < a; i++) {
    if (visited[vec[i]]) {
      count++;
      continue;
    }
    l = 0, r = 1;
    sum = vec[l] + vec[r];
    while (sum != vec[i]) {
      if (sum < vec[i]) {
        if (r == a - 1) break;
        r++; 
        sum += vec[r];
      } else {
        if (l == r -1) {
          if (r < a - 1) {
            sum -= vec[l++];
            sum += vec[++r];
          } else break;
        } else {
          sum -= vec[l++];
        }
      }
    }
    
    if (sum == vec[i]) {
      count++;
      visited[vec[i]] = true;
    }
  }

  cout << count << endl;
  
}

int main() {
  int it; 
  cin >> it;

  while(it--) solve();
  return 0;
}
