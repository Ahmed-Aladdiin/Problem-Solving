#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<long long> & v, long h) {
  long long sum = 0;
  for (long long i : v) 
    if (h > i)
      sum += (h-i);
  return sum;
}

void solve() {
  long long n, x, w, ans;
  cin >> n >> x;
  vector<long long> columns(n);
  for (long long & i : columns) cin >> i;

  long long max = 2000000000, min = 1, mid;

  while (min <= max) {
    mid = (max - min)/2 + min;
    w = sum(columns, mid); 
    if (w <= x){
      min = mid+1;
      ans = mid;
    } else {
      max = mid-1;
    }
  } 

  cout << ans << endl;
  
}

int main() {
  long long it = 0;
  cin >> it;

  while(it--){
    solve();
  }

  return 0;
}
