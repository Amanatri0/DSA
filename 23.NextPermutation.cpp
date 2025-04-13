#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 6, 5, 4} ;
    int n = arr.size();
    int pvit = -1 ;

    for(int i = n - 2; i >= 0; i--){
        if(arr[i] < arr[ i + 1]){
            pvit = i ;
            break;
        }
    }

     if(pvit == -1){
            reverse(arr.begin(), arr.end());
            return;
        }

    for(int i = n - 1; i > pvit; i-- ){
      if(arr[i] > arr[pvit]){
          swap(arr[pvit] , arr[i]);
            break;
      }
    }

    int j = pvit + 1 , k = n - 1 ;

    while (j <= k){
        swap(arr[j], arr[k]);
        j++;
        k--;
    }
    
    return 0;

}
