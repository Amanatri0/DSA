#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {9, 4, 20, 3, 10, 5};
    int n = arr.size();
    int tar = 33;

    int freq = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = i;
        for (int j = i + 1; j < n; j++)
        {
            sum += j;

            if (sum == tar)
            {
                freq++;
            }
        }
    }

    cout << freq << endl;
    return 0;
}

// ------------------------------------------- Optimal approach using PrefixSum ----------------------------------------

int main()
{
    vector<int> arr = {9, 4, 20, 3, 10, 5};
    int tar = 33;

    int count = 0;
    int n = arr.size();
    vector<int> prefixSum(n, 0);

    prefixSum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    unordered_map<int, int> m;

    for (int j = 0; j < n; j++)
    {
        if (prefixSum[j] == tar)
        {
            count++;
        }

        int val = prefixSum[j] - tar;

        if (m.find(val) != m.end())
        {
            count += m[val];
        }

        cout << "Value of count will be : " << m[val] << endl;

        if (m.find(prefixSum[j]) == m.end())
        {
            m[prefixSum[j]] = 0;
        }

        m[prefixSum[j]]++;

        cout << " m of Prefix sum of j : " << m[prefixSum[j]] << endl;
    }

        return 0;
}