
// Scarble is a game and it will check wich name has more points than the other


#include <iostream>
#include <vector>
using namespace std;

vector<int> points = {
    1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
    1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10,
};


int call_num(string name) {

  int score = 0;
  
  for (int i = 0; i < name.size(); i++) {
    int num = toupper(name[i]) - 'A';
    score = score + points[num];
  }

  return score;
}

int main() {
  string sec1, sec2;
  cout << "Sentence 1: ";
  getline(cin, sec1);
  cout << "Sentence 2: ";
  getline(cin, sec2);


 int calls1 = call_num(sec1);
 int calls2 = call_num(sec2);

  if(calls1 > calls2){
    cout << "Sentence 1 wins" << endl;
  } else if (calls1 < calls2){
    cout << "Sentence 2 wins" << endl;
  }else {
    cout << "Tie, play again" << endl;
  }

}
