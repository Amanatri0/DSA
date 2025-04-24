#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a = 20, b = 28;

  int gcd = 1;

  for (int i = 1; i < min(a, b); i++) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }

  cout << gcd << endl;
  return 0;
}



//--------------------- Euclid's Algorithm  optimal code --------------------------------------


#include <iostream>
#include <vector>

using namespace std;

int euclidAlgo(int a, int b) {
  while (a > 0 && b > 0) {
    if (a > b) {
      a = a % b;
    } else {
      b = b % a;
    }
  }

  if (a == 0)
    return b;
  return a;
}

int main() {
  int a = 8, b = 8;
  cout << euclidAlgo(a, b) << endl;
  return 0;
}
