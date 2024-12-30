#include <iostream>
using namespace std;


void reverseArray(int arr[], int size){

    int start = 0 , end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--; 
    }
    

}

void sumOfArray(int arr[], int size){
    int sumArr = 0;

    for (int i = 0; i < size; i++){
        sumArr += arr[i];
        // multiplyArr *= arr[i];
    }
    cout << sumArr << " ";
    cout << endl;
}


void uniqueArray(int arr[], int size){
    
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                if (arr[i] != arr[j]){
                    cout << "Unique numbers are:" << " ";
                    cout << arr[i] << endl;
                } 
            }
            
        }

        
}


int main(){
    int arr[]= { 1, 2, 3, 2, 5, 3, 4, 1, 6};
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;

    reverseArray(arr, size);

    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }
    
    cout << endl;

}



//----------------------------- Write a function to print intersection of two arrays
int main(){
    int arr1[]= { 9, 3, 5, 1, };
    int arr2[]= { 6, 7, 2, 8, 3, 9 };
    // int intersectionArr = {};
    int size1 = 4;
    int size2 = 6;

    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            if (arr1[i] == arr2[j]){
                 cout << "Repeated numbers are:" << " ";
                 cout << arr1[i] << endl;
            }
        }
    }

   return 0;

}