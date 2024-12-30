#include <iostream>
using namespace std;

int main()
{
    /************************* Pattern for printing n number of line and n numbers of rows in a single line
        output -:
    ABCD
    ABCD
    ABCD
    ABCD
    ************************************/

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     char val = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << val;
    //         val += 1;
    //     }
    //     cout << endl;
    // }

    int n = 3;
    char num = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num += 1;
        }

        cout << endl;
    }

    return 0;
}