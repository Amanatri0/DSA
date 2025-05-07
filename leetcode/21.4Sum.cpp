// 3sum
// 15 ==> leetcode

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 2, 2, 2, 2, 2};

    int target = 8;

    vector<int> ans;
    int n = arr.size();

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }

        for (int j = i + 1; j < n;)
        {

            int k = j + 1, l = n - 1;

            while (k < l && j < k)
            {
                int sum = arr[i] + arr[j] + arr[k] + arr[l];

                if (target > sum)
                {

                    k++;
                }
                else if (target < sum)
                {
                    l--;
                }
                else
                {
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    ans.push_back(arr[k]);
                    ans.push_back(arr[l]);

                    k++;
                    l--;

                    while (j < k && k < l && arr[j] == arr[k])
                    {
                        j++;
                        k++;
                    }
                }
            }

            j++;
            while (j < n && arr[j] == arr[j - 1])
            {
                j++;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}