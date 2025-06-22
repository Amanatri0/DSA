/*
Given an array prices[] of length n, representing the prices of the stocks on different days. The task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell. If it is not possible to make a profit then return 0.

Note: Stock must be bought before being sold.

Examples:

Input: prices[] = [7, 10, 1, 3, 6, 9, 2]
Output: 8
Explanation: You can buy the stock on day 2 at price = 1 and sell it on day 5 at price = 9. Hence, the profit is 8.

Input: prices[] = [7, 6, 4, 3, 1]
Output: 0
Explanation: Here the prices are in decreasing order, hence if we buy any day then we cannot sell it at a greater price. Hence, the answer is 0.

Input: prices[] = [1, 3, 6, 9, 11]
Output: 10
Explanation: Since the array is sorted in increasing order, we can make maximum profit by buying at price[0] and selling at price[n-1].
*/

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

// Buy and Sell stocks multiple transactions allowed
/*
The cost of stock on each day is given in an array price[]. Each day you may decide to either buy or sell the stock i at price[i], you can even buy and sell the stock on the same day. Find the maximum profit that you can get.

Note: A stock can only be sold if it has been bought previously and multiple stocks cannot be held on any given day.

Input: prices[] = [4, 2, 2, 2, 4]
Output: 2
Explanation: Buy the stock on day 3 and sell it on day 4 => 4 – 2 = 2. Maximum Profit = 2.

Input: prices[] = [100, 180, 260, 310, 40, 535, 695]
Output: 865
Explanation: Buy the stock on day 0 and sell it on day 3 => 310 – 100 = 210. Buy the stock on day 4 and sell it on day 6 => 695 – 40 = 655. Maximum Profit = 210 + 655 = 865.
*/

int main()
{
    vector<int> arr = {100, 180, 260, 310, 40, 535, 695};
    int n = arr.size();
    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < arr[i + 1])
        {
            maxProfit += (arr[i + 1] - arr[i]);
        }
    }

    cout << maxProfit << endl;

    return 0;
}