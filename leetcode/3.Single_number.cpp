#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {2, 2, 1, 3, 3, 4};

    // size of the array
  int n = nums.size();

  // outer loop will pick a signle number and check it with all the numbers in the array
  for (int i = 0; i < n; i++) {             // if outer loop number is 2

    // after ther inner loop has completed one round the freq will be set to 0 again
  int freq = 0;

  // inner loop will check how many times the outer loop number has occured 
    for (int j = 0; j < n; j++) {           
      if (nums[i] == nums[j]) {             // inner loop will check how many times 2 has present in the array
        freq++;                             // if the outer loop number and inner loop number is same freq will be increased 
      }
    }
    if (freq == 1) {                        // after running the inner loop if the freq of the number is 1 
      cout << nums[i] << endl;              // then print the number 
    }
  }
  return 0;
}