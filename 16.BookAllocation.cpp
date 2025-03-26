#include <iostream>
#include <vector>
using namespace std;

bool isValid( vector<int> &arr , int m , int n , int maxAllowedPages  ) {
    int students = 1 , pages = 0 ;

    for (int i = 0; i < n; i++){
        if (arr[i] > maxAllowedPages){    // check if the current page is greater than the maximum allowed pages 
          return false;
        }

        if (pages + arr[i] <= maxAllowedPages){   // add pages and check if the total pages are less than the maximum allowed pages
            pages += arr[i]                       // if the pages are less than add the current pages to the page variable.

        }else{
            students ++ ;           // after adding if the pages are grater than the maximum allowed pages, increase student and set the current page value ain the pages variable for the new student.
            pages = arr[i]
        }
    
    }

    return students > m ? false : true ;        // check if the students are greater than the distributed students, if the studnets are greater return false else true.
    
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

    return ans;

}

int main() {
    vector<int> arr = {15, 17, 20} ;
    int m = 3 , n = 2 ;

    cout << allocatedNum(arr, m, n) << endl;
    return -1;
}

