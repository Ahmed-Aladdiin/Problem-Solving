#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int n, t;
  int arr[101];
  cin >> n;

  for (int i = 1; i <= n;i ++) {
    cin >> t;
    arr[t] = i;
  }

  for (int i = 1; i <= n; i++) cout << arr[i] << ' ';
  
  return 0;
}
