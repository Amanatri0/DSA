#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 5, 5};
  int n = nums.size();

  if (n == 1)
    return nums[0];

  int start = 0, end = n - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (mid == 0 && nums[0] != nums[1])
      return nums[mid];
    if (mid == n - 1 && nums[n - 1] != nums[n - 2])
      return nums[mid];

    if (nums[mid - 1] != nums[mid] && nums[mid + 1] != nums[mid]) {
      cout << "Single element is : " << nums[mid] << endl;
      return nums[mid];
    }

    if (mid % 2 == 0) { // even
      if (nums[mid - 1] == nums[mid]) {

        end = mid - 1;
      } else {

        start = mid + 1;
      }
    } else { // odd
      if (nums[mid - 1] == nums[mid]) {

        start = mid + 1;
      } else {

        end = mid - 1;
      }
    }
  }
  return -1;
}

















/**************************************** Dumb Approach which i came with *****************************************/


int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 5, 5} ;

    int start = 0;
    int end = nums.size() - 1;

    for(int i = 1; i < nums.size(); i ++){
        if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
        {
            cout << "Single elemts is : " << nums[i] << endl;
        }else if (nums[start] != nums[start + 1] ){
            cout << "Single elemts is : " << nums[start] << endl; 
        } else {
            cout << "Single elemts is : " << nums[end] << endl;
        }
        
    }

    return -1;

}