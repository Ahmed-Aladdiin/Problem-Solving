#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
	void solve()
	{
    int n, m, k, dist;
    string river;
    cin >> n >> m >> k >> river;
		reverse(river.begin(), river.end());
    river = 'B' + river + 'B';
    vector<bool> canVisit(n+2, false);
    vector<int> canSwim(n+2, 0);
    canVisit[n+1] = true;
    canSwim[n+1] = k;

    for (int i = n + 1; i > 0; i--) {
      if (!canVisit[i] || river[i] == 'C') continue;
      if (river[i] == 'L' || river[i] == 'B') {
        dist = 1;
        while(dist <= m && i-dist >= 0) {
          if (river[i-dist] != 'C') canVisit[i-dist] = true;
          canSwim[i-dist] = (canSwim[i] > canSwim[i-dist]) ? canSwim[i]:canSwim[i-dist];
          dist++;
        }
      }
      if (river[i] == 'W') {
        dist = 1;
        while (dist <= canSwim[i] && i-dist >= 0) {
          if (river[i-dist] == 'C') break;
          canVisit[i-dist] = true;
          canSwim[i-dist] = (canSwim[i]-dist > canSwim[i-dist]) ? canSwim[i]-dist:canSwim[i-dist];
          if (river[i-dist] == 'L') break;
					dist++;
        }
        // while (river[i] == 'W') i--;
        // i++;
      }
    }

    string ans = "NO";
    if (canVisit[0]) ans = "YES";
    cout << ans << endl;
	}

public:
	void Solve()
	{
    int it;
    cin >> it;

    while (it--) {
      solve();
    }
	}
};

int main()
{
	Solution s;
	s.Solve();
	return 0;
}
