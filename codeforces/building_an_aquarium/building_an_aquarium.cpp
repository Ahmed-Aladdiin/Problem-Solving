#include <climits>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
  
long sum(vector<long> & v, long h) {
  long sum = 0;
  for (long i : v) 
    sum += (i > h) ? h : i;
  return sum;
}

long inc(long h, long x, long n, vector<long>& columns) {
  long w = h*n - sum(columns, h);
  while (w <= x)
  {
    h++;
    w = h*n - sum(columns, h);
  }
  return h-1;
}


long dec(long h, long x, long n, vector<long>& columns) {
  long w = h*n - sum(columns, h);
  while (w > x)
  {
    h--;
    w = h*n - sum(columns, h);
  }
  return h;
}

void solve() {
  long n, x, h = -1;
  cin >> n >> x;
  
  vector<long> columns(n);
  for (long & i : columns) {
    cin >> i;
    if (i > h) h = i;
  }

  if (n == 1) {
    cout << x + columns[0] << endl;
    return;
  }

  //long w = h*n - sum(columns, h);
  //h = (w < x) ? inc( h, x, n, columns): dec( h, x, n, columns);
  h = inc(1, x, n, columns);
  cout << h << endl;
  return;
}

int main() {
  long it = 0;
  cin >> it;

  while (it--) {
    solve();
  }
  return 0;
}
