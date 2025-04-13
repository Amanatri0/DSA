#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 0, 0, 0} , m = 3;;
    int b[] = {2, 5, 6} , n = 3 ;

    int indx = m + (n - 1) , i = m -1 , j = n - 1 ;

    while (i >= 0 && j >= 0){
        if (b[j] >= a[i]){
            a[indx] = b[j];
            indx--;
            j--;
        }else {
            a[indx] = a[i];
            indx --;
            i-- ;
        }
    } 

    // the code is if in case the  (i !<= 0 ) 
    /*
    a = {4, 5, 6, 0, 0, 0}
    b = {1, 2, 3}

    in these case the b[j] should be placed backward to a[index] so that a can be sorted
    */

    while ( j >= 0){
        b[j] = a[indx] ;
        indx-- ;
        j-- ;
    }
    

    return 0;

}
