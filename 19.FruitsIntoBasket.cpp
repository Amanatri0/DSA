/*
You are given two arrays of integers, fruits and baskets, each of length n, where fruits[i] represents the quantity of the ith type of fruit, and baskets[j] represents the capacity of the jth basket.

From left to right, place the fruits according to these rules:

Each fruit type must be placed in the leftmost available basket with a capacity greater than or equal to the quantity of that fruit type.
Each basket can hold only one type of fruit.
If a fruit type cannot be placed in any basket, it remains unplaced.
Return the number of fruit types that remain unplaced after all possible allocations are made.

 

Example 1:

Input: fruits = [4,2,5], baskets = [3,5,4]

Output: 1

Explanation:

fruits[0] = 4 is placed in baskets[1] = 5.
fruits[1] = 2 is placed in baskets[0] = 3.
fruits[2] = 5 cannot be placed in baskets[2] = 4.
Since one fruit type remains unplaced, we return 1.
*/



//--------------------++++++++++++++++++++++++++++++ NOTE: Not completely correct +++++++++++++++++++++++++++---------------------------



#include <iostream>
#include <vector>
using namespace std;

int fruitsCollected(vector<int> &fruits, vector<int> &baskets) {

  int n = 3;

  vector<int> newFruits;
  vector<int> newBaskets;
  int remaning = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {

      if (fruits[i] <= baskets[j]) {
        newFruits.push_back(fruits[i]);
        newBaskets.push_back(baskets[j]);
      }

      if (fruits[i] > baskets[j]) {
        remaning = fruits[i] - baskets[j];
      }
    }
  }
  return remaning;
}

int main() {
  vector<int> fruits = {3, 6, 1};
  vector<int> baskets = {6, 4, 7};

  cout << fruitsCollected(fruits, baskets) << endl;
  return 0;
}