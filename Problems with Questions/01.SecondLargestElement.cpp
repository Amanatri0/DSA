/*
 Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.

Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.

Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist.
*/

#include <iostream>
#include <vector>
using namespace std;

// optimal approch with O(n) time complexcity
int main()
{
    vector<int> arr = {1, 12, 34, 1, 10, 35};

    int n = arr.size();
    int lar = -1, secLar = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lar)
        {
            secLar = lar;
            lar = arr[i];
        }
        if (arr[i] > secLar && arr[i] != lar)
        {
            secLar = arr[i];
        }
    }

    return secLar;
}

// ----------------------------------------------------------------------------------------------------------------------------------------------

// My approach --- don't know time complexcity , maybe O(nlog n)

int main()
{
    vector<int> arr = {1, 12, 34, 1, 10, 35};

    int n = arr.size();
    int seclarger = -1; // 12

    sort(arr.begin(), arr.end()); // {1, 1, 10, 12, 34, 35}

    for (int i = 0; i < n - 1; i++) // i = 4
    {
        if (arr[i] < arr[i + 1] && arr[i] != arr[i + 1])
        {
            seclarger = arr[i];
        }
    }
}