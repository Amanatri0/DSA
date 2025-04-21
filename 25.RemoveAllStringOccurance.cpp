#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s = "daabcbaabcbc", p = "abc" ;
    
    while (s.length() > 0 && s.find(p) < s.length()){
        s.erase(s.find(p), s.length());
    }
    
    return 0;

}