#include <iostream>
#include <vector>
using namespace std;

int leftOver(int n)
{
    int maxLeftOver = -1;
    int pastrySize = 1;

    for (int i = 1; i < n; i++)
    {
        int leftover = n % i;

        if (leftover > maxLeftOver)
        {
            maxLeftOver = leftover;
            pastrySize = i;
        }
        else if (leftover == maxLeftOver && i > pastrySize)
        {
            pastrySize = i;
        }
    }

    return maxLeftOver;
}

int main()
{
    int n;

    cout << "Enter number of pastries" << endl;
    cin >> n;

    cout << "The maximum number of leftovers are : " << leftOver(n) << endl;

    return 0;
}