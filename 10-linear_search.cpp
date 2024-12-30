#include <iostream>
using namespace std;

int linearSearch(int arr[] , int size, int target) {
    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;

}

int main(){

int arr[] = {2, 5, 6, 1, 7, 8};
int size = 6;
int target = 0;

cout << linearSearch(arr, size, target) << endl;;


}