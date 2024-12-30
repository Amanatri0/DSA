#include <iostream>
using namespace std;

int main()
{
    float factorial = 1;

    for (int i = 1; i <= 5; i++)
    {
        factorial = factorial * i;
    }

    cout << factorial;
    return 0;
}

// The above code is correct but for some reason the code is not running in vs.code (use Replit)