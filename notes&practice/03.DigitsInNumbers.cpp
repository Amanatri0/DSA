#include <iostream>
#include <vector>
using namespace std;

void printDigits(int n) {

  int digits = 0;
  while (n != 0) {
    digits = n % 10;

    cout << digits << " ";

    n = n / 10;
  }
}

int main() {
  int n = 3568;

  printDigits(n);
}