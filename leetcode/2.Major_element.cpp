#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> nums = {3, 2, 3};
  int n = nums.size();

  // the outer loops iterate each of nums value , outer loop will run 6 times
  for (int val : nums)
  {

    int freq = 0;

    // the inner loop will compare the val with each of the element in the nums
    // array eg:- if val = 3 , then it will compare 3 with ele = 3,2,3,
    for (int ele : nums)
    {
      if (ele == val)
      {
        freq++;
      }
    }

    // here if the freq is greater than n/2 then we will return the val
    if (freq > n / 2)
    {
      cout << "Majority element: " << val << endl;
      return val;
    }
    cout << "Current value: " << val << endl;
  }

  cout << "No majority element found." << endl;
  return 0;
}
