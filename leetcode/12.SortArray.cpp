#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 1, 4, 5, 3, 7, 9, 6, 8};

    int n = arr.size() ;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+ 1]);
            }
        }    
    }
    
}