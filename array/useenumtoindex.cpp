#include <iostream>

using namespace std; 

enum StudentNames
{
  KENNY, // 0
  KYLE,  // 1
  STAN,  // 2
  BUTTERS, // 3
  CARTMAN, // 4
  MAX_STUDENTS //5
}; 

int main() {

  int testScores[MAX_STUDENTS] = {}; 
  testScores[STAN] = 76; 

  cout << "Print out" << endl;
  for (int iter= 0; iter < MAX_STUDENTS; iter++) {
    cout << "Array[" << iter << "]: " << testScores[iter] << endl; 
  }
 
  return 0; 
}


