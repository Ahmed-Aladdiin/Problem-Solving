#include <iostream>
#include <math.h>
using namespace std;

int main (int argc, char *argv[]) {
  int n, k;
  cin >> n >> k;

  int sum = 0, a, b;
  while (n--) {
    cin >> a >> b;
    sum += b - a + 1;
  }

  int top = ceil(sum/float(k));
  int ans = top * k - sum;
  cout << ans;
  return 0;
}
