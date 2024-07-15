#include <iostream>
#include <vector>

using namespace std;

void rec(vector<int> & vec, vector<bool> & visited, int n, bool & reached) {
  if (vec.size() == n) {
    for (int & i : vec) cout << i << ' ';
    cout << endl;
    reached = true;
    return;
  }

  for (int i = 2; i <= 4; i++) {
    int result = vec[vec.size() - 1] - i;
    if (result < 1 || visited[result]) continue;
    vec.push_back(result);
    visited[result] = true;
    rec(vec, visited, n, reached);
    if (reached) return;
    vec.pop_back();
    visited[result] = false;
  }
  for (int i = 2; i <= 4; i++) {
    int result = vec[vec.size() - 1] + i;
    if (result > n || visited[result]) continue;
    vec.push_back(result);
    visited[result] = true;
    rec(vec, visited, n, reached);
    if (reached) return;
    vec.pop_back();
    visited[result] = false;
  }
}

void solve() {
  int n;
  cin >> n;

  vector<int> vec;
  vector<bool> visited(n+1, false);
  bool reached = false;

  for (int i = 1; i <= n; i++) {
    vec.push_back(i);
    visited[i] = true;
    rec(vec, visited, n, reached);
    if (reached) break;
    visited[i] = false;
    vec.pop_back();
  }

  if (!reached) cout << -1 << endl;
}

int main() {
  int it;
  cin >> it;

  while(it--) solve();
  return 0;
}
