#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
  int longestConsecutive(vector<int> &nums)
  {

    int size = nums.size();
    unordered_map<int, int **> m;
    int max = 0;

    for (int i = 0; i < size; i++)
    {
      if (m[nums[i]])
        continue;
      int **pre, **next;
      pre = m[nums[i] - 1];
      next = m[nums[i] + 1];
      int val;
      if (pre && next)
      {
        int **pneww = new int *;
        *pneww = new int;
        **pneww = **pre + **next + 1;
        val = **pneww;
        int *temp1 = *pre, *temp2 = *next;
        delete temp1;
        delete temp2;
        m[nums[i]] = pneww;
        *m[nums[i] - 1] = *m[nums[i] + 1] = *m[nums[i]];
      }
      else if (pre)
      {
        **pre += 1;
        val = **pre;
        m[nums[i]] = pre;
      }
      else if (next)
      {
        **next += 1;
        val = **next;
        m[nums[i]] = next;
      }
      else
      {
        m[nums[i]] = new int *;
        *(m[nums[i]]) = new int;
        **(m[nums[i]]) = 1;
        val = 1;
      }
      if (val > max)
        max = val;
    }
    return max;
  }
};
int main()
{
  Solution s;
  // vector<int> v = {1, 3, 2}; 
  vector<int> v = {0,3,7,2,5,8,4,6,0,1};
  cout << s.longestConsecutive(v)<< endl;
  return 0;
}