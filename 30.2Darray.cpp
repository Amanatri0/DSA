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