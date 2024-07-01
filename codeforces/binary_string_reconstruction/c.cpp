#include <climits>
#include <iostream>
using namespace std;

int n0, n1, n2;
int min_len;
string ans;

int construc(string s, int n0, int n1, int n2) {
  if (!n0 && !n1 && !n2) {
    return s.length();
  }  
  if (n0 < 0 || n1 < 0 || n2 < 0) {
    return INT_MAX;
  }

  if(*(s.rbegin()) == '0') {
    int r1 = construc(s+'1', n0, n1 - 1, n2);
    int r2 = construc(s+'0', n0 - 1, n1, n2);
    if (r1 < r2 ) {
      if (r1 < min_len) {
        min_len = r1;
        ans = s + '1';
      }
      return r1;
    }
    if (r2 < min_len) {
      min_len = r2;
      ans = s + '0';
    }
    return r2;
  } else {
    int r1 = construc(s+'1', n0, n1, n2 - 1);
    int r2 = construc(s+'0', n0, n1 - 1, n2);
     if (r1 < r2 ) {
      if (r1 < min_len) {
        min_len = r1;
        ans = s + '1';
      }
      return r1;
    }
    if (r2 < min_len) {
      min_len = r2;
      ans = s + '0';
    }
    return r2;
 }
}

void solve() {
  cin >> n0 >> n1 >> n2;
  min_len = INT_MAX;

  if (!n1 && !n2) {
    string s = "";
    for (int i = 0; i < n0 + 1; i++) {
      s += "0";
    }
    cout << s << endl;
    return;
  }
  if (!n1 && !n0) {
    string s = "";
    for (int i = 0; i < n2 + 1; i++) {
      s += "1";
    }
    cout << s << endl;
    return;
  }

  construc("1", n0, n1, n2);
  construc("0", n0, n1, n2);

  cout << ans << endl;
}

int main (int argc, char *argv[]) {
  int it;
  cin >> it;

  while(it--) solve();
  return 0;
}
