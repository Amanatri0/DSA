#include <iostream>
#include <vector>
using namespace std;

int main() {

  int arr[] = {2, 1, 0, 0, 1, 2, 1, 0, 2, 0};
  int n = 10;
  vector<int> newArr;

  int zeroCount = 0;
  int oneCount = 0;
  int twoCount = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      zeroCount++;
    } else if (arr[i] == 1) {
      oneCount++;
    } else {
      twoCount++;
    }
  }

  for (int i = 0; i < zeroCount; i++) {
    newArr.push_back(0);
  }
  for (int i = 0; i < oneCount; i++) {
    newArr.push_back(1);
  }
  for (int i = 0; i < twoCount; i++) {
    newArr.push_back(2);
  }

  for (int i = 0; i < n; i++) {
    cout << newArr[i] << " ";
  }

  cout << endl;

  return 0;
}