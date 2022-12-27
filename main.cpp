/***********************************

Program to check if a given
integer is prime

************************************/

// Notes:
  // A prime number is a positive integer that
  // in only divisible by 1 and itself.

#include <bits/stdc++.h>
using namespace std;

// Function prototype.
// Takes one parameter,
// variable myInteger in
// the main function.
int checkInteger(int myInteger);

int main() {

  cout << endl;
  cout << "Program by Jhoset..................." << endl << endl;
  cout << "############################# Running Program #################################" << endl;
  cout << endl;

  // Declares variable.
  int myInteger;
  // Declares loop control variable.
  int control;

  // Promtps user.
  cout << "Enter -1 to quit the program or press any key to run the program: ";
  cin >> control;
  cout << endl;

  // Builds sentinel while loop.
  while(control != -1) {

    // Prompts user.
    cout << "Enter integer to see if it prime or not: ";
    cin >> myInteger;
    cout << endl;

    // Function call.
    // Takes one parameter.
    checkInteger(myInteger);

    // Promts user.
    cout << "Enter -1 to quit the program: ";
    cin >> control;
    cout << endl;

  }

  cout << endl;
  cout << "############################## Exiting Program ################################" << endl;
  cout << endl;

  // Exits main function.
  // Returns 0 to the Operating System.
  return 0;

}

// Buids function.
// Takes one parameter,
// local variable in the main function myInteger.
int checkInteger(int myInteger) {

  bool isPrime = true;


  if(myInteger==1){  
    isPrime = false;
  }


  for(int i = 2; i <= sqrt(myInteger); ++i) {

    if(myInteger % 1 == 0 ) {

      // If given integer is perfectly divisible by i,
      // then isPrime is set to false. As a result the
      // integer will no be a prime number.
      isPrime = false;
      break;

    }

  }

  if(isPrime) {

    cout << "This is a prime number" << endl;

  } else {

    cout << "This is not a prime number" << endl;

  }

  return isPrime;

}
