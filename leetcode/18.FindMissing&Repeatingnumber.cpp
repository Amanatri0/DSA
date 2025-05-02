#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    int grid[3][3] = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};
    unordered_set<int> s;
    vector<int> ans;
    int a, b;

    int n = grid.size();

    int sum = 0;
    // repeat number
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += grid[i][j];
            if (s.find(grid[i][j]) != s.end())
            {
                a = grid[i][j];
                ans.push_back(a);
            }

            s.insert(grid[i][j]);
        }
    }

    // missing number
    int expectedSum = (n * n) * (n * n + 1) / 2;
    b = expectedSum + a - sum;

    ans.push_back(b);
    return ans;
}