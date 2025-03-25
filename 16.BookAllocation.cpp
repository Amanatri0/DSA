#include <iostream>
#include <vector>
using namespace std;

bool isValid( vector<int> &arr , int m , int n , int maxAllowedPages  ) {
    int students = 1 , pages = 0 ;

    for (int i = 0; i < n; i++){
        if (arr [i] > maxAllowedPages){
          return false;
        }

        if (pages = arr[i] <= maxAllowedPages){
            pages += arr[i]

        }else{
            students ++ ;
            pages = arr[i]
        }
    
    }

    return students > m ? false : true ;
    
}

int allocatedNum(vector<int> &arr , int m , int n) {
    int sum = 0 ;

    for (int i = 0; i < n; i++){
        sum += arr[i] ;
    }

    int start = 0 , end = sum ;
    int ans = -1 ;

    while ( start <= end) {
        int mid = start + (end - start ) / 2 ;

        if (isValid( arr, m , n, mid) ){    // left
            ans = mid ;
            end = mid - 1 ;
        }else {     //right
            start = mid + 1 ;
        }
        
    }

}

int main() {
    vector<int> arr = {15, 17, 20} ;
    int m = 3 , n = 2 ;

    cout << allocatedNum(arr, m, n) << endl;
    return -1;
}

