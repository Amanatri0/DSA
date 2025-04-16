/* 
    ========>           Bubble sort
*/

// #include <iostream>
// #include <vector>
// using namespace std;


// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++){
//         for (int j = 0; j < n-i-1; j++){
//             if (arr[j] > arr[j + 1]){
//                 swap(arr[j], arr[j + 1]) ;
//             }
//         }
//     }
// }

// void printArry(int arr[], int n) {
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " " ;
//     }
//     cout << endl;
// }

// int main() {
//     int n = 5;
//     int arr[] = {4, 1, 5, 2, 3};

//     bubbleSort(arr, n);
//     printArry(arr, n);
//      return 0;
// }



//---------------------------------------------------------------------------------------------------------------------


/* 
    ========>           Selection sort
*/

// #include <iostream>
// #include <vector>
// using namespace std;

// void selectionSort(int arr[], int n){
//     for (int i = 0; i < n ; i++){
//         int selectInd = i ;
//         for (int j = 0; j < n; j++){
//             if (arr[j] < arr[selectInd]){
//                 selectInd = j ;
//             }
            
//         }
        
//     }
    
// }

// void printArry(int arr[], int n) {
//         for (int i = 0; i < n; i++){
//             cout << arr[i] << " " ;
//         }
//         cout << endl;
//     }


// int main () {
//     int n = 5;
//     int arr[] = {4, 1, 5, 2, 3};
    
//     selectionSort(arr, n) ;
//     printArry(arr, n) ;

//     return 0;
// }


//---------------------------------------------------------------------------------------------------------------------


/* 
    ========>           Insertion sort
*/

#include <iostream>
#include <vector>
using namespace std;


void insertionSort(int arr[], int n) {

    for (int i = 1; i < n; i++){
        int cur = i ;
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > cur){
            arr[prev + 1] =  arr[prev] ;
            prev -- ;
        }
        
        arr[prev + 1] = cur ;
    }
    

}

{1, 4, 5, 2, 3}

void printArry(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }

    cout << endl;
    
}

int main() {
    int arr[] = {4, 1, 5, 2, 3 };
    int n = 5 ;

    insertionSort(arr, n) ;
    printArry(arr, n) ;

    return 0;
    
}