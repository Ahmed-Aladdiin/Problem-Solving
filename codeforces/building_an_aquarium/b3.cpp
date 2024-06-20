#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  int t;
  cin >> t;

  for (; t; t--)
  {
    long long n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
      cin >> v[i];

    long long st = 1;
    long long dr = 2000000000;
    long long ans = v[0];
    while (st <= dr)
    {
      long long mid = (st + dr) / 2;
      long long nec = 0;
      for (int i = 0; i< n; i++)
        if (mid > v[i])
          nec += (mid - v[i]);
      if (nec <= k)
        ans = mid, st = mid + 1;
      else 
        dr = mid - 1;
    }
    cout << ans << endl;
  }
  return 0;
}
