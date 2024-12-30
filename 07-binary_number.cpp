#include <iostream>
using namespace std;


int decimalToBinary(int decimalNum){

    int ans = 0, pow = 1;

    while (decimalNum > 0)
    {
        int rem = decimalNum % 2;
        decimalNum /= 2;

        ans += (rem * pow);
        pow *= 10;

    }
    
    return ans;
}


int binaryToDecimal(int binNum) {
    int ans = 0, pow = 1; // 2*0

    while (binNum > 0)
    {
        int rem = binNum % 2;
        ans += rem * pow ;

        binNum /= 10;
        pow *= 2;
    }
    
    return ans; // decimal form 
}



int main(){
    cout << binaryToDecimal(1010110) << endl;

    return 0;

}