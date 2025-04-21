#include <iostream>
#include <vector>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]) {
  for (int i = 0; i < 26; i++) {
    if (freq1[i] != freq2[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string s1 = "ab", s2 = "daibbaoooo";

  int freq[26] = {0};

  for (int i = 0; i < s1.length(); i++) {
    freq[s1[i] - 'a']++;
  }

  int winSize = s1.length();

  for (int i = 0; i < s2.length(); i++) {

    int windIdx = 0, indx = i;
    int windFreq[26] = {0};

    while (windIdx < winSize && indx < s2.length()) {
      windFreq[s2[indx] - 'a']++;
      windIdx++;
      indx++;
    }

    if (isFreqSame(freq, windFreq)) {
      cout << "True" << endl;
      return 1;
    }
  }
  cout << "False" << endl;
  return 0;
}