/*
Assign C cows to N stalls such that min distance between them is largest possible. Return largest minimum distance.

C = 3
N = 5
Arr = [1, 2, 8, 4, 9]


*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int c, int n, int minAllowedDist)
{

    int cows = 1, lastPos = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastPos >= minAllowedDist)
        {
            cows++;
            lastPos = arr[i];
        }

        if (cows == c)
        {
            return true;
        }
    }

    return false;
}

int averageDist(vector<int> &arr, int c, int n)
{

    sort(arr.begin(), arr.end());

    int start = 1, end = arr[n - 1] - arr[0], ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, c, n, mid))
        { // right
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int c = 3;
    int n = 5;

    cout << averageDist(arr, c, n) << endl;

    return 0;
}

bool isPossible(int arr, int mid, int c, int n)
{
    int cows = 0, lasPos = arr[0];

    for (int i = 1; i < n; i++)
    {
        if ((arr[i] - lasPos) >= mid)
        {
            cows++;
            lasPos = arr[i];
        }

        if (cows == c)
        {
            return true;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int c = 3;
    int n = 5;

    int start = 0, end = max(arr) - min(arr);

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, mid, c, n))
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}