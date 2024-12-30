#include <iostream>
#include <vector>  //  you will need to include vector method to use it. Methods are present in STL (Standard Templete Library)
using namespace std;

int main() {

    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl;     // 3
    cout << vec.capacity() << endl;  //
    return 0;
}