#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3};
    int tar = 3;
    int n = arr.size();

    int start = 0, end = n - 1;
    int freq = 0;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        int sum = start + (start + 1);

        if (mid == tar)
        {
            cout << "Target found : " << mid << endl;
            freq++;
        }

        if (sum < tar)
        {
            start++;
        }
        else if (sum > tar)
        {
            end--;
        }
        else
        {
            cout << "Target found : " << mid << endl;
            freq++;
        }
    }

    return freq;
}

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