#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n; 
  cin >> n;
  vector<int> order(n);
  for (int i = 1; i <= n; i++) order[i-1] = i;
  vector<int> pre(order);
  int target = n*(n+1)/2, count = 1;
  int sum = target;

  while (std::next_permutation(order.begin(), order.end())) {
    for (int i = 0; i < n; i++) {
      sum -= pre[i];
      sum += order[i];
      if (sum == target) count++;
    }
    pre = order;
  }
  
  cout << count;
  return 0;
}
