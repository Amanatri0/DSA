#include <iostream>
using namespace std;

bool isArmstrong(int n){

    int copyN = n;
    int sumOfcubes = 0;

    while( n != 0){
        int digits = n % 10;

        sumOfcubes += (digits * digits * digits);

        n = n / 10;
    }

    return sumOfcubes == copyN;
}

int main(){
    int n = 153;
    if(isArmstrong(n)){
        cout << "Is armstrong " << endl;
    }else{

        cout << "Is NOT armstrong " << endl;
    }
    return 0;
}