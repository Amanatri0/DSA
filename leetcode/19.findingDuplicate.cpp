// Finding the duplicate Number

// 287 Leetcode

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3, 2, 1, 3, 4};
    unordered_set<int> m;
    int n = arr.size();
    int duplicate = 0;

    for (int i = 0; i < n; i++)
    {
        if (m.find(arr[i]) != m.end())
        {
            duplicate = arr[i];
        }

        m.insert(arr[i]);
    }

    cout << duplicate << endl;
    return 0;
}

// ----------------------------------------- Optimized code using ===> Hashing  (floyd's tortorise  also known as slow-fast pointer approach) --------------------------------------

int main()
{
    vector<int> num = {3, 2, 1, 3, 4};
    int slow = 0, fast = 0;

    do
    {
        slow = num[slow];
        fast = num[num[fast]];

    } while (slow != fast);

    slow = num[0];

    while (slow != fast)
    {
        slow = num[slow];
        fast = num[fast];
    }

    cout << slow << endl;

    return 0;
}