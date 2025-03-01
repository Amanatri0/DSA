#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar) {

  int start = 0;
  int end = arr.size() - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (tar > arr[mid]) {
      start = mid + 1;
    } else if (tar < arr[mid]) {
      end = mid - 1;
    } else {
      return mid;
    }
  }

  return -1;
}

int main() {

  vector<int> arr = {-1, 0, 1, 2, 3, 4, 5}; // odd arr
  int tar = 4;

  cout << "Index of tar = " << binarySearch(arr, tar) << endl;

  // vector<int> arr2 = {-1, 0, 1, 2, 3, 4}; // even arr2
  // int tar2 = 0;
}