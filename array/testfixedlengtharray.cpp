/*
 * =====================================================================================
 *
 *       Filename:  testarray1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/15/2017 08:30:32 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std; 

int main() {
  int array[5]; 

  for (int iter = 0; iter < 5; iter++) {
	  array[iter] = iter; 
  } 

  cout << "print out" << endl;
  for (int iter = 0; iter < 5; iter++)  {
	  cout << array[iter] << endl;
  }

  return 0; 

}

