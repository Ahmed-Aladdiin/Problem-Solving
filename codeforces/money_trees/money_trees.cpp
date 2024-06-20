#include <iostream>
#include <vector>
using namespace std;

void solve(){
  long long length, max_fruit;
  cin >> length >> max_fruit;

  vector<long long> fruits(length);
  vector<long long> heights(length);
  for (long long & i: fruits) cin >> i;
  for (long long & i: heights) cin >> i;

  long long start, end, max_length = 0;
  long long sum = 0;
  start = 0;
  end = -1;

  while(end < length - 1){
    end++;
    if (heights[end-1] % heights[end] != 0) {
      start = end;
      sum = fruits[end];
    } else {
      sum += fruits[end];
    }

    while(sum > max_fruit && start < end){
      sum -= fruits[start];
      start++;
    }
    if (sum <= max_fruit)
      max_length = (end - start + 1 > max_length) ? end - start + 1 : max_length;
  } 

  if (length == 1 && fruits[0] <= max_fruit) max_length = 1;

  cout << max_length << endl;
}

int main() {
  long long it;
  cin >> it;

  while(it--) solve();
  return 0;
}
