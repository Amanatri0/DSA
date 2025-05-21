#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int maxProf = 0, bestBuy = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > bestBuy)
        {
            maxProf = max(maxProf, arr[i] - bestBuy);
        }

        bestBuy = min(bestBuy, arr[i]);
    }

    cout << maxProf << endl;

    return 0;
}
