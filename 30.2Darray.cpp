#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int output[3] = {9, 15, 21};
    int n = sizeof(output);

    vector<int> sum;

    for (int i = 0; i < n; i++)
    {
        sum.push_back(matrix[i][2] + matrix[i + 1][2]);

        if (sum[i] == output[i])
        {
            cout << "True : " << sum[i] << endl;
        }
    }

    return 0;
}

// ---------------------------------------------- Maximum row sum ---------------------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

int main()
{
    int matrix[3][3] = {{1, 2, 30}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;

    int maxOf = 0;

    for (int i = 0; i < row; i++)
    {
        int sumOf = 0;

        for (int j = 0; j < col; j++)
        {
            sumOf += matrix[i][j];
        }

        maxOf = max(maxOf, sumOf);
    }

    cout << maxOf << endl;
    return 0;
}

//------------------------------------------ Diognal sum Of a matrix -------------------------------------------

/*
Ex:-

    1, 2, 3
    4, 5, 6
    7, 8, 9

    sum of = 1 + 5 + 9 and 3 + 5 + 7 where 5 will be common and added only once so the total will be
    = 25
*/

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;

    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }
            else if (j == col - 1 - i)
            {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}