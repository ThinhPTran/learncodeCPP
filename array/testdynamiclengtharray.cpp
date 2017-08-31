/*
 * =====================================================================================
 *
 *       Filename:  testarray2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/25/2017 11:00:40 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream> 

using namespace std; 

int main() {

  int alen = 5; 
  int * parray = NULL;

  // get input length
  cout << "Please choose array's length: " << endl;
  cin >> alen; 

  cout << "You choose array's length to be: " << alen << endl;


  // Check error
  if (alen<=0) {
    cout << "Array's length must be positive!!!" << endl;
  }

  parray = new int[alen]; 

  for (int iter = 0; iter < alen; iter++) {
    parray[iter] = iter; 
  }

  // print out
  cout << "Printing the array!!!" << endl;
  for (int iter = 0; iter < alen; iter++) {
    cout << "array[" << iter << "]: " << parray[iter] << endl; 
  }

  return 0; 
}



