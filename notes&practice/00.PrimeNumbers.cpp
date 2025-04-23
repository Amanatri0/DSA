#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 42;
    int N = 100;

   for (n = 0; n < N; n++){

    int isPrime = true;
    for (int i = 2; i * i < n; i++){
        if (n % i == 0){
            cout << "Not prime" << endl;
            isPrime = false;
            return 1;
        }
        
    }
   }
   

    cout << "Prime" << endl;
    return 0;
    
}