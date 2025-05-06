// 3sum
// 15 ==> leetcode

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size() - 1;
    set<vector<int>> num;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> trip = {arr[i], arr[j], arr[k]};
                    sort(trip.begin(), trip.end());

                    if (num.find(trip) == num.end())
                    {
                        num.insert(trip);
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }
}

// ---------------------------------- optimized code for 3 Sum  == > O(nlogn + n*n) --------------------------------------------

int main()
{
    vector<int> arr = {-1, 0, -1, 1, 2, -4};
    int n = arr.size();
    vector<int> ans;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {

        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }

        int j = i + 1, k = n - 1;

        int sum = arr[i] + arr[j] + arr[k];

        while (j < k)
        {
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                ans.push_back(arr[k]);
                j++;
                k--;

                while (j < k && arr[j] == arr[j - 1])
                {
                    j++;
                }
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}