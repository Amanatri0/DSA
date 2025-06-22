/*
Given a array arr[] and positive integer k denoting heights of towers, you have to modify the height of each tower either by increasing or decreasing them by k only once.

Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower. The modified height of the tower can be negative.

Note: A slight modification of the problem can be found here.

Examples:

Input: arr[] = [1, 5, 8, 10], k = 2
Output: 5
Explanation: The array can be modified as [3, 3, 6, 8]. The difference between the largest and the smallest is 8 - 3 = 5.

Input: arr[] = [3, 9, 12, 16, 20], k = 3
Output: 11
Explanation: The array can be modified as [6, 12, 9, 13, 17]. The difference between the largest and the smallest is 17 - 6 = 11

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 5, 8, 10};
    int k = 2;
    int n = arr.size();

    if (n < 1)
        return;

    sort(arr.begin(), arr.end());

    int diff = arr[n - 1] - arr[0];

    for (int i = 1; i < count; i++)
    {
        }

    return 0;
}