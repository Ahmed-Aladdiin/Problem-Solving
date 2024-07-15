#include <iostream>
using namespace std;

void solve() {
  int n;
  string s = "";
  char c = 'v', v = 'r';
  
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> c;
    if (c == v) continue;
    v = c;
    s += c;
  }

  if (s.size() == 1 && s[0] != 'W') {
    cout << "NO" << endl;
    return;
  } else if (s.size() == 2) {
    if (s != "WW" && s != "RB" && s!= "BR") cout << "NO";
    else cout << "YES";
    cout << endl;
    return;
  }

  string w1 = "WRW", w2 = "WBW", w0 = "TTT";
  string result = "YES";

  string test1 = "rr"; test1[0] = s[0]; test1[1] = s[1];
  if (test1 == "RW" || test1 == "BW") result = "NO";
  test1[0] = s[s.size()-2]; test1[1] = s[s.size()-1];
  if (test1 == "WR" || test1 == "WB") result = "NO";


  if (result != "NO") for (int i = 1; i < s.size() - 1; i++) {
    w0[0] = s[i-1]; w0[1] = s[i]; w0[2] = s[i+1];
    if (w0 == w1 || w0 == w2) { result = "NO"; break; }
  }

  cout << result << endl;
}

int main() {
  int it;
  cin >> it;

  while(it--) solve();
  return 0;
}
