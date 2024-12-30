#include <iostream>
#include <limits>
using namespace std;

int main() {
  int size = 5;
  int nums[size];
  int smallestNum = INT64_MAX;
  // int largestNum = INT64_MIN;

  // initiallize another variable where the i value will be stored if the samllest number is found 
  int indexOfSmallestNum = ' ';
  

  cout << "Please enter some numbers:" << endl;
  for (int i = 0; i < size; i++) {
    cin >> nums[i];
  }

  for (int i = 0; i < size; i++) {
    if (nums[i] < smallestNum) {
      smallestNum = nums[i];
      indexOfSmallestNum = i;
    
    }

    // smallestNum = min(nums[i], smallestNum);  // min() function is used to find the smallest number
    // largestNum = max(nums[i], largestNum);  // max() function is used to find the largest number
  }



  cout << "The smallest number from the above numbers is: " << smallestNum
       << endl;
  cout << "The index pf smallest number is: " << indexOfSmallestNum
       << endl;

  return 0;
}