/*
Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer.
Do the mentioned change in the array in place.

Note: Consider the array as circular.

Examples :

Input: arr[] = [1, 2, 3, 4, 5], d = 2
Output: [3, 4, 5, 1, 2]
Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2.

Input: arr[] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20], d = 3
Output: [8, 10, 12, 14, 16, 18, 20, 2, 4, 6]
Explanation: when rotated by 3 elements, it becomes 8 10 12 14 16 18 20 2 4 6.

Input: arr[] = [7, 3, 9, 1], d = 9
Output: [3, 9, 1, 7]
Explanation: when we rotate 9 times, we'll get 3 9 1 7 as resultant array.

*/

#include <iostream>
#include <vector>
using namespace std;

// this code take extra space by creating a new vector ** temp ** , however in question it is said to do in place.
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = 3;

    vector<int> temp(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        int formula = (i + n) % arr.size();

        temp[formula] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}