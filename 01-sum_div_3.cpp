#include <iostream>
using namespace std;

int main()
{

    int sum = 0;
    for (int i = 1; i < 50; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
            cout << i << endl;
        }
    }
    cout << sum;

    return 0;
}
