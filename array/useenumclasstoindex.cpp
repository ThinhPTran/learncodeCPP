#include <iostream> 

using namespace std; 

enum class StudentNames
{
  KENNY, // 0
  KYLE,  // 1
  STAN,  // 2
  BUTTERS, // 3
  CARTMAN, // 4
  WENDY, // 5
  MAX_STUDENTS // 6
}; 

int main() {
  int testScores[static_cast<int>(StudentNames::MAX_STUDENTS)] = {}; 
  testScores[static_cast<int>(StudentNames::STAN)] = 76; 

  cout << "Print out" << endl;
  for (int iter = 0; iter < static_cast<int>(StudentNames::MAX_STUDENTS); iter++) {
    cout << "Array[" << iter << "]: " << testScores[iter] << endl;
  }

}


