/************************************ Butterfly Pattern ********************************************
 
 *      *     ----> 6 spaces
 **    **     ----> 4 spaces
 ***  ***     ----> 2 spaces
 ********
 ********
 ***  ***     ----> 2 spaces
 **    **     ----> 4 spaces
 *      *     ----> 6 spaces

*/




#include <iostream>
using namespace std;

int main() {
  int n = 4;
  // top part

  // outer loop
  for (int i = 0; i < n; i++) {

    // first star

/*
 * 
 ** 
 *** 
 ****
*/
    for (int j = 0; j < i + 1; j++) {
      cout << '*';
    }

    // inner spaces
    if (i != n - 1) {
      for (int j = 0; j < 2 * (n - i - 1); j++) {
        cout << ' ';
      }
    }

    // for second stars

/*
     *
    **
   ***
 *****
*/
    for (int j = 0; j < i + 1; j++) {
      cout << '*';
    }

    cout << endl;
  };


  // bottom part

  // outer loop

  for (int i = 0; i < n; i++) {

    // for firts stars
    for (int j = 0; j < n - i; j++) {
      cout << '*';
    }

    // for spaces
    if (i != 0) {
      for (int j = 0; j < 2 * i; j++) {
        cout << ' ';
      }
    }

    // for second stars
    for (int j = 0; j < n - i; j++) {
      cout << '*';
    }

    cout << endl;
  }

  return 0;
}