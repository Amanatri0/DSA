#include <iostream>
#include <vector>
using namespace std;

bool isAlphanum(char ch) {
  if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
    return true;
  }

  return false;
}

int main() {
  string s = "Ac3?e3c&";
  
  int end = s.length() - 1, start = 0;

  while (start < end) {
    if (!isAlphanum(s[start])) {
      start++;
      continue;
    }
    if (!isAlphanum(s[end])) {
      end--;
      continue;
    }
    if (tolower(s[start]) != tolower(s[end])) {
      cout << "Not a palindrom" << endl;
      return 0;
    }

    start++;
    end--;
  }
  cout << "It is a palindrom" << endl;
  return 1;
}