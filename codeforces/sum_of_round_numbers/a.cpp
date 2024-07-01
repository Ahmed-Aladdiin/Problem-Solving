#include <iostream>
#include <vector>
using namespace std;

void solve() {
  int num, sub, n, f, end;
  vector<int> answers;

  cin >> num;

  for (int i = 10; i <= 100000; i *= 10) {
    n = num % i;
    f = num % (i/10);
    end = n - f;
    if (end) 
      answers.push_back(end);
  } 

  cout << answers.size() << endl;
  for (int i : answers) cout << i << ' ';
  cout << endl;
}

int main() {
  int it = 0;
  cin >> it;
  while(it--) solve();
}
