#include <iostream>
#include <vector>
using namespace std;

/********************************** Correct and optimize approach for leetcode *****************************************/

        int main(){
            vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2 } ;
            int tar = 0;

            int start = 0;
            int end = arr.size() - 1;
    
            while (start <= end){
                int mid = start + (end - start) / 2;
    
                if( tar == arr[mid] ){
                     return mid;
                }
    
                // left section
                if( arr[start] <= arr[mid] ){
                    if (arr[start] <= tar && tar <= arr[mid]) {
                        end = mid - 1;
                    }else {
                        start = mid + 1;
                    }
                } else { // right section
                    if (arr[mid] <= tar && tar <= arr[end]) {
                        start = mid + 1;
                    }else {
                        end = mid - 1 ;
                    }
                }
            }
            
            return -1;
    
        }


        

/*********************************** Needs to be fixed approach **********************************************/



// int main(){
//     vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2 } ;
//     int tar = 0;

//     int start = 0 ;
//     int end = arr.size() - 1;

//     while ( start >= end){
//         int mid = start + (end - start) / 2;

//         // for left section of array
//         if ( arr[start] <= arr[mid] ){
//                 end = arr[mid - 1] ;
//             if (tar > arr[mid]){
//                 end = arr[mid - 1];
//             } else if (tar < arr[mid])
//             {
//                 start = arr[mid + 1]
//             }else {
//                 return mid;
//             } 
//         } 
//         // for the right section
//         else if (arr[end] <= arr[mid]) {
//             start = arr[mid + 1];
//             if (tar > arr[mid])
//             {
//                 end = arr[mid - 1];
//             } else if (tar < arr[mid])
//             {
//                 start = arr[mid + 1];
//             }else{
//                 return mid;
//             }
            
            
//         }else{
//             return mid;
//         }
        
//     }

//     return -1;

// }



