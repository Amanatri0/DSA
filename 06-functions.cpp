#include <iostream>
using namespace std;

int sumOfTwo(int a, int b) {
  int sum = a + b;
  return sum;
}

// min of two numbers

int sumOFDigits(int digit) {
  int sum = 0;

  while (digit > 0) {

    int lastdigit = digit % 10;

    // cout << "LastDigits = " << lastdigit << endl;

    digit = digit / 10;

    // cout << "Digits = " << digit << endl;

    sum += lastdigit;
    // cout << "Sum = " << sum << endl;
  }
  return sum;
}

int main() {

  cout << "Sum = " << sumOFDigits(12345676) << endl;

  return 0;
}