#include <iostream>
#include <vector>
using namespace std;

bool searchTarget(int matrix[][4], int tar, int row)
{
    int n = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (tar == matrix[row][mid])
        {
            return true;
        }
        else if (tar > matrix[row][mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}

int main()
{
    int matrix[3][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};

    int target = 34;
    int m = sizeof(matrix) / sizeof(matrix[0]);
    int n = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int start = 0, end = m - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target >= matrix[mid][0] && target <= matrix[mid][n - 1])
        {
            // the target is in this row
            if (searchTarget(matrix, target, mid))
            {
                cout << "Found" << endl;
            };

            return 0;
        }
        else if (target < matrix[mid][0])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return 0;
}