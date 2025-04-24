// Leetcode 9

#include <iostream>
using namespace std;

int isRevNum(int n)
{
    int revNum = 0;

    while (n != 0)
    {
        int a = n % 10;

        if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
        {
            return 0;
        }

        revNum = revNum * 10 + a;

        n = n / 10;
    }

    return revNum;
}

int main()
{
    int n = 121;

    if (n < 0)
        return false;
    int revNum = isRevNum(n);

    if (revNum == n)
    {
        cout << "Is palindrom" << endl;
    }
    else
    {

        cout << "NOT a palindrom" << endl;
    }

    return 0;
}