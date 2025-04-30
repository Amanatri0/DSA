#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<vector<int>> nums = {{9, 1, 7},
                                {8, 9, 2},
                                {3, 4, 6}};

    unordered_map<int, int> m;

    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        int first = nums[i][i];

        int sec = first - nums[i][i + 1];

        if (m.find(sec) != m.end())
        {
            ans.push_back(i);
        }

        if (sec == 0)
        {
            ans.push_back(i)
        }

        m[first] = i;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}