// Time complexity O(n3)

#include <iostream>
using namespace std;

int main() {

  int arr[] = {1, 3, 4, 2, 5};
  int size = 5;

    // for the number of lines that the output will run, as the array size is 5 it will run 5 times
  for (int start = 0; start < size; start++) {
      
     // here the start is 0 and the end point is less than the size of the array, so it will run 4 times, the last number in the array will be print by the outer loop.
    for (int end = start; end < size; end++) {

        // this loop will also run 5 times printing all the subarray combinations, here the start is also 0 and the loop will run equal to end times
      for (int i = start; i <= end; i++) {
        cout << arr[i];
      }
      cout << " ";
    }
    cout << endl;
  }

  return 0;
}


/*---------------------------------------------- Optimized Approach ------------------------------------------------*/

// Time Complexity O(n2)


#include <iostream>
using namespace std;

int main() {

  int arr[] = {1, 3, 4, 2, 5};
  int size = 5;

int maxSum = INT8_MAX;
    // for the number of lines that the output will run, as the array size is 5 it will run 5 times
  for (int start = 0; start < size; start++) {

    int currentSum = 0;  
    
     // here the start is 0 and the end point is less than the size of the array, so it will run 4 times, the last number in the array will be print by the outer loop.
    for (int end = start; end < size; end++) {

        currentSum += arr[end];
        maxSum = max(currentSum, maxSum);
      
    }
    cout << endl;
  }

  return 0;
}



/*------------------------------------------ Most Optimized way (Kadane's Algorithm) ------------------------------------*/

// Time Complexity O(n)

#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> nums = {2, 3, 4, -10, 6, 7, -4};
  // inititalize two variables
  int currentSum = 0, maxSum = 0;

    // foreach loop checks each val in the array nums
  for (int val : nums) {
    currentSum += val;                      // currentSum = (currentSum = 0) + (val = 2) ==> 2 initially this will be stored 
    maxSum = max(currentSum, maxSum);       // here maximum of currentSum and maxSum will be will be stored in maxSum. 
    if (currentSum < 0) {                   // if the currentSum is less than 0, if the value is (-negative), currentSum will be set ot 0
      currentSum = 0;
    }
    cout << currentSum << endl;
  }
  cout << maxSum << endl;

  return 0;
}