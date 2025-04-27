#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int m = sizeof(matrix) / sizeof(matrix[0]);
    int n = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int srow = 0, erow = m - 1, scol = 0, ecol = n - 1;

    vector<int> ans;

    while (srow <= erow && scol <= ecol)
    {

        for (int i = scol; i <= ecol; i++)
        {
            ans.push_back(matrix[srow][i]);
        }

        for (int j = srow + 1; j <= erow; j++)
        {
            ans.push_back(matrix[j][ecol]);
        }

        for (int i = ecol - 1; i >= scol; i--)
        {
            if (srow == erow)
            {
                break;
            }

            ans.push_back(matrix[erow][i]);
        }

        for (int j = erow - 1; j >= srow + 1; j--)
        {
            if (scol == ecol)
            {
                break;
            }

            ans.push_back(matrix[j][scol]);
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}