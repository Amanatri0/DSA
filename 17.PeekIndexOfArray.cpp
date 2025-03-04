#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1, 3, 4, 2, 0} ;

    for (int i = 0 , n = nums.size(); i < n; i++)
    {
        if (nums[i + 1] < nums[i] && nums[i] > nums[ i - 1] )
        {
            cout << "Peek of the mountain is: " << nums[i] << " and the index is: " << i << endl;
        }

    }
    return -1;

}