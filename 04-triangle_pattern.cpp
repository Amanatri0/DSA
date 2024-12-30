/*************************************** Printing characters loop ************************************************
 * output:-
 * 
 * A
 * B B
 * C C C
 * D D D D
*/


#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    char ch = 'A';

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            char newCh = i + ch;
            cout << newCh;
        }

        cout << endl;
    }

    return 0;
}



/*************************************** Printing backwark loop ************************************************
 * output:-
 * 1
 * 2 1
 * 3 2 1
 * 4 3 2 1
 * 5 4 3 2 1
 * 
*/

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//        for (int j = i + 1; j > 0; j--)
//        {
//         cout << j;
//        }
       
//     }
//        return 0;
    

// }




/*************************************** Floyids triangle pattern *******************************************
 * output:-
 * 
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 * 
*/


// #include <iostream>
// using namespace std;

// int main() {

//   int n = 4;
//   int num = 0;
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < i + 1; j++) {
//       num++ ;
//       cout << num << " ";;
//     }
//     cout << endl;
//   }

//   return 0;
// }






/************************************** Inverted triangles ********************************
output:-
1111
 222
  33
   4
*/


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//       for(int j=0; j < i; j++){
//         cout << " ";
//       }

//       for(int j=0; j < n-i ; j ++){
//         cout << (i + 1);
//       }
       
//         cout << endl;
//     }

//     return 0;
// }




/*************************************** Inverted triangle using Characters ******************************
output:-
AAAA
 BBB
  CC
   D
*/


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//   // char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//       for(int j=0; j < i; j++){
//         cout << " ";
//       }

//       for(int j=0; j < n-i ; j ++){
//         char newCh = i + 'A';
//         cout << newCh;
//       }
       
//         cout << endl;
//     }

//     return 0;
// }




/***************************************** Piramid pattern *******************************
output:-
       1
      121
     12321
    1234321
   123454321
  12345654321
 1234567654321
123456787654321
*/


// #include <iostream>
// using namespace std;

// int main() {
//   int n = 8;
//   // char ch = 'A';
//   for (int i = 0; i < n; i++) {
//     // spaces
//     for (int j = 0; j < (n - i - 1); j++) {
//       cout << " ";
//     }

//     // num 1

//     for (int j = 0; j < i + 1; j++) {
//       cout << j + 1;
//     }

//     // num 2
//     for (int j = i; j > 0; j--) {
//       cout << j;
//     }

//     cout << endl ;
//   }

//   return 0;
// }



/************************************************* Hollow dimond pattern****************************************************
 *  
    *
   * *
  *   *
 *     *
  *   *
   * *
    *
 * 
*/


#include <iostream>
using namespace std;

int main() {

  int n = 4;

  // for top part of the dimond
/*  

    *
   * *
  *   *
 *     *

*/ 

  // outer loop

  for (int i = 0; i < n; i++) {
    // spaces
    for (int j = 0; j < (n - i - 1); j++) {
      cout << " ";
    }
    // print star
    cout << '*';

    // inner loop spaces
    if (i != 0) {
      for (int j = 0; j < (2 * i - 1); j++) {
        cout << " ";
      }

      // print star
      cout << '*';
    }
    cout << endl;
  }

  // for bottom part of the dimond
  // *   *
  //  * *
  //   *

  // outer loop
  for (int i = 0; i < n - 1; i++) {
    // spaces
    for (int j = 0; j < i + 1; j++) {
      cout << " ";
    }
    // print star
    cout << '*';

    // inner loop spaces
    if (i != n - 2) {
      for (int j = 0; j < (2 * (n - i) - 5); j++) {
        cout << " ";
      }
      // print star
      cout << '*';
    }
    cout << endl;
  }
  return 0;
}

