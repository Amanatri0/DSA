#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
  vector<int> ans;
  int n = nums.size();

  // the outer loop will run for once for all the elements in the array
  for (int i = 0; i < n; i++)
  {

    // inner loop will add the current element with all the other elements
    for (int j = i + 1; j < n; j++)
    {

      // "if" statement will check the sum of outer element and inner element is
      // equal to the target
      if (nums[i] + nums[j] == target)
      {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
      }
    }
  }

  return ans;
}

int main()
{

  vector<int> nums = {2, 7, 11, 13, 15};
  int target = 17;

  vector<int> ans = pairSum(nums, target);

  cout << ans[0] << ", " << ans[1] << endl;

  return 0;
}

/*--------------------------------------------------- Better approach --------------------------------------------*/

vector<int> twoSum(vector<int> nums, int target)
{
  vector<int> ans;
  int n = nums.size();
  sort(nums.begin(), nums.end());

  int i = 0, j = n - 1;

  // sort the nums first

  while (i < j)
  {
    int pairSum = nums[i] + nums[j];
    if (pairSum > target)
    {
      j--;
    }
    else if (pairSum < target)
    {
      i++;
    }
    else
    {
      ans.push_back(i);
      ans.push_back(j);
      return ans;
    }
  }

  return ans;
}

/*---------------------------------------- Optimized Approach O(n) time complexicity using hashing ------------------------------------*/

int main()
{
  vector<int> nums = {5, 2, 11, 7, 15};
  unordered_map<int, int> m;

  vector<int> ans;

  int target = 9;
  for (int i = 0; i < nums.size(); i++)
  {
    int first = nums[i];
    int sec = target - first;

    if (m.find(sec) != m.end())
    {
      ans.push_back(i);
      ans.push_back(m[sec]);
    }

    m[first] = i;
  }

  for (int i = 0; i < nums.size(); i++)
  {
    cout << ans[i] << endl;
  }

  return 0;
}

int main()
{
  vector<int> nums = {5, 2, 11, 7, 15};
  unordered_map<int, int> m;

  int target = 9;

  for (int i = 0; i < nums.size(); i++)
  {
    int sum = target - nums[i];

    if (m.find(sum) != m.end())
    {
      cout << "Found = " << nums[i] << endl;
    }

    m.insert(nums[i]);
  }
}