#include <iostream>
#include <vector>
using namespace std;
 
int main() {
 vector<int>nums = {1, 2, 3, 4};

 vector<int> ans(nums.size());

 int n = nums.size();

    for (int i = 0; i < n; i++){

        int product = 1;
    
        for (int j = 0; j < n; j++){
            if ( i != j){
                product = product * nums[j];
            }
        }
        
     ans[i] = product;
    }
    
    for (int i = 0; i < n; i++){
        cout << ans[i] << " " ;
    }

return 0;
        
}


// -----------------------------------------------------------------------------------------


#include <iostream>
#include <vector>
using namespace std;
 
int main() {
 vector<int>nums = {1, 2, 3, 4};

        int n = nums.size();
        vector<int> ans(n, 1);
 
        for(int i = 1 ; i < n; i++){
           ans[i] = ans[ i-1] * nums[i - 1];
        }

        int suffix = 1;

        for(int j = n-2; j >= 0; j--){
            suffix *= nums[j + 1];

            ans[j] *= suffix;
        }

        return 0;
    }