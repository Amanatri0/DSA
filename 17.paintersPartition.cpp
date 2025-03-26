#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr , int n, int p, int maxAllPainter) {

    int painter = 1 , walls = 0 ;

    for (int i = 0; i < n; i++){
        
        if (walls + arr[i] > maxAllPainter) return false;
        
        if (walls + arr[i] < maxAllPainter){
            walls += arr[i];
        }else {
            painter++ ;
            walls = arr[i] ;
        }
        
    }
    
    return painter > p ? false : true ;


}


int minimumTime( vector<int> &arr , int n, int p ){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    int start = 0 , end = sum;
    int ans = -1;
    while (start <= end){
        int mid = start + (end - start) / 2 ;

        if (isValid(arr, n, p, mid)){  //left

            ans = mid;
            end = mid - 1;

        }else {     // right
                start = mid + 1 ;
        }
        
    }
    
    return ans;
    
}

int main() {
    vector<int> arr = {10, 10, 10, 10};
    int n = 4 , p = 2 ;

    cout << minimumTime(arr, n, p) << endl;
    return -1;
}