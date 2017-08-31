#include <iostream> 

using namespace std; 

void passValue(int value) {
  value = 99; 
}

void passArray(int prime[5]) {
  prime[0] = 11; 
  prime[1] = 7; 
  prime[2] = 5; 
  prime[3] = 3; 
  prime[4] = 2; 
}

int main() {
  
  int value = 1; 
  cout << "Before passValue: " << value << "\n"; 
  passValue(value); 
  cout << "After passValue: " << value << "\n"; 

  int prime[6] = { 2, 3, 5, 7, 11}; 
  cout << "Before passArray: " 
       << prime[0] << " " 
       << prime[1] << " " 
       << prime[2] << " " 
       << prime[3] << " " 
       << prime[4] << " " 
       << endl;

  passArray(prime); 
  cout << "After passArray: " 
       << prime[0] << " " 
       << prime[1] << " " 
       << prime[2] << " " 
       << prime[3] << " " 
       << prime[4] << " " 
       << endl;

  return 0; 
}


