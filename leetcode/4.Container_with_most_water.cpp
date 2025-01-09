#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

  int maxWater = 0;

  for (int i = 0; i < height.size(); i++) {
    for (int j = i + 1; j < height.size(); j++) {

      int w = j - i;
      // cout << "W for Wolf: " << w << endl;

      int ht = min(height[i], height[j]);
      int area = w * ht;

      maxWater = max(maxWater, area);

    //   cout << "Maxwater" << maxWater << endl;
    }
  }
  cout << maxWater << endl;

  return maxWater;
}


// ---------------------------------------- Optimzed approach --------------------------------------------

int main(){

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
       int n = height.size();
        int maxWater = 0;

        int lp = 0;
        int rp = n -1;

        while( lp < rp){
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int area = w * ht;

            maxWater = max(maxWater, area);

            height[lp] < height[rp] ? lp++ : rp-- ;

        }
       
        return maxWater;
    }