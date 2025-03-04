#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     vector<int> nums = {1, 3, 4, 2, 0} ;

//     for (int i = 0 , n = nums.size(); i < n; i++)
//     {
//         if (nums[i + 1] < nums[i] && nums[i] > nums[ i - 1] )
//         {
//             cout << "Peek of the mountain is: " << nums[i] << " and the index is: " << i << endl;
//         }

//     }
//     return -1;

// }


/**************************************************************** OPTIMIZED binary search approach and correct *****************************************/



// int main() {
//     vector<int> nums = {0, 2, 0};
//     int start = 1;                       // here the start and the end points are not 0 and n-1 because, we know that the peek index cannot be in the staring or the ending point of a mountain array.
//     int end = nums.size() - 2;
  
//     while (start < end) {
//       int mid = start + (end - start) / 2;
  
//       if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]) {
//         cout << "Value of the middle: " << nums[mid] << endl;
//         cout << "Index of the middle: " << mid << endl;
//       }
  
//       if (nums[mid - 1] < nums[mid]) {
//         start = mid + 1;
//         cout << "Value of the middle: " << nums[mid] << endl;
//         cout << "Index of the middle: " << mid << endl;
//       } else {
//         end = mid - 1;
//         cout << "Value of the middle: " << nums[mid] << endl;
//         cout << "Index of the middle: " << mid << endl;
//       }
//     }
//       return -1;
//   }



/********************************** DUMB way of binary search approach ********************************/

// int main() {
//     vector<int> nums = {1, 3, 4, 2, 0} ;
//     int start = 0;
//     int end = nums.size() - 1;

//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2 ;
//         if (nums[mid - 1] < nums[mid]){
//             if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
//             {
//                 cout << nums[mid] << endl;
//             }else{
//                 mid--;
//             }
            
//         }else if (nums[mid + 1] < nums[mid])
//         {
//             if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
//             {
//                 cout << nums[mid] << endl;
//             }else{
//                 mid++;
//             }
//         }else{
//             cout << mid << endl;
//             return nums[mid];
//         }
        
//         return -1;
        
//     }
// }