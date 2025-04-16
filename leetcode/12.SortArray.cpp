#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {2, 3, 1, 4, 5, 3, 7, 9, 6, 8};
  vector<int> newArr;
  int n = arr.size();

  //---- sort

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

// ------------ for unsorted array's -----------------------

  for (int i = 0; i < newArr.size(); i++) {
    int isDuplicate = false;

    for (int j = 0; j < newArr.size() - 1; i++) {
      if (arr[i] == newArr[j]) {
        isDuplicate = true;
        break;
      }

      if (!isDuplicate) {
        newArr.push_back(arr[i]);
      }
    }
  }

  // ------------------- for sorted array's --------------------

//   for (int i = 0; i < n ; i++) {
//     if(i == 0 || arr[i] != arr[i - 1]){
//       newArr.push_back(arr[i]);
//     }
//   }

//   for (int i = 0; i < n - 1; i++){
//     cout << newArr[i] << " ";
//   }
}


