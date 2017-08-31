/*
 * =====================================================================================
 *
 *       Filename:  useinitializerlist.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/25/2017 11:43:24 AM
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

  int myarray[5] = {3,1,2}; 

  cout << "Print out" << endl;
  for (int iter = 0; iter < 5; iter++) {
    cout << "Array[" << iter << "]: " << myarray[iter] << endl;
  }

  return 0; 
}


