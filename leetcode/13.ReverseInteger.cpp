// Leetcode 7

#include <iostream>

using namespace std;

int main()
{
    int num = -12345;
    int reverseSum = 0;

    while (num != 0)
    {
        int a = num % 10;

        reverseSum = reverseSum * 10 + a;

        num = num / 10;
    }

    cout << reverseSum << endl;

    return reverseSum;
}