#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int matrix[5][5] = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    int target = 5;

    int m = matrix.size();
    int n = matrix[0].size();

    int row = 0, col = n - 1;

    while (col >= 0 && row < m)
    {
        if (target == matrix[row][col])
        {
            cout << "Found at : " << "Row : " << row << "Col : " << col << endl;
            return 1;
        }
        if (target < matrix[row][col])
        {
            col--;
        }
        if (target > matrix[row][col])
        {
            row++;
        }
    }
    return 0;
}