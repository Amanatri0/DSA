#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<char> ch = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

  int n = ch.size();

  int indx = 0;

  for (int i = 0; i < n; i++) {
    int count = 0;
    char charc = ch[i];

    while (i < n && charc == ch[i]) {
      count++;
      i++;
    }

    if (count == 1) {
      ch[indx] = charc;
      indx++;
    } else {
      ch[indx] = charc;
      indx++;
      string str = to_string(count);
      for (char c : str) {
        ch[indx] = c;
        indx++;
      }
    }

    i--;
  }

  ch.resize(indx);
  for (char c : ch) {
    cout << c << " ";
  }
  return indx;
}