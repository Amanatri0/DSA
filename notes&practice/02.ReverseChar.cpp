#include <iostream>
#include <vector>
#include <string>
using namespace std;

// int main() {
//     vector<char> c = {"h", "e", "l", "l", "o"};

//     int start = 0;
//     int end = c.size() - 1;

//     while(start <= end){
//         swap(c[start], c[end]);
//         start++ ;
//         end-- ;
//     }
// }

int main() {
    string pdm = "A man, a plan, a canal: Panama" ;
    
    string s = "";

    for(char c : pdm){
        int ch = tolower(c);
        
        if(ch > 96 && ch < 123){
            s.push_back(ch);
        }
    }

    int start = 0, end = s.size() - 1;
    bool palindrom = true;

    while (start <= end){
        if(s[start] != s[end]){
            cout << "Is not a palindrom" << endl;
            return 0;
        }
    }

    if (palindrom)
    {
        cout << s << " is a palindrom" << endl;
    }

   return 1;

}