// Apply Operations to an Array   
// Question no - 2460

#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> nums = {1, 2, 2, 1, 1, 0};
  int n = nums.size();
  vector<int> ans;

  for (int i = 0; i < n ; i++) {
    if (nums[i] == nums[i + 1]) {
      nums[i] = nums[i] * 2;
      nums[i + 1] = 0;
    }
    ans.push_back(nums[i]);
    cout << ans[i] << endl;
  }
}