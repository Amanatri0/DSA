#include <iostream>
#include <vector>
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

/*--------------------------------------------------- optimized approach --------------------------------------------*/

vector<int> twoSum(vector<int> nums, int target)
{
  vector<int> ans;
  int n = nums.size();

  int i = 0, j = n - 1;

  // sort the nums first
  // sort(nums.begin(), nums.end());

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

int main()
{
  vector<int> nums = {2, 7, 11, 15};
  int target = 17;
  int n = nums.size();

  int i = 0, j = n - 1;

  // for (int i = 0; i < nums.size(); i++)
  // {
  //   for (int j = i + 1; j < nums.size(); j++)
  //   {
  //     if (nums[i] + nums[j] == target)
  //     {
  //       cout << "Target found : " << nums[i] << " + " << nums[j] << endl;
  //     }
  //   }
  // }

  vector<int> ans;

  while (i <= j)
  {
    int sum = nums[i] + nums[j];

    if (sum > target)
    {
      j--;
    }
    else if (sum < target)
    {
      i++;
    }
    else
    {
      ans.push_back(nums[i]);
      ans.push_back(nums[j]);
      return ans;
    }
  }

  return 0;
}
