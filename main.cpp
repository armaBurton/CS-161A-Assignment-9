#include <iostream>

using namespace std;

void welcomeText();

int main () {
  welcomeText();


  return 0;
}

void welcomeText(){
  cout << "Welcome to my Final Grade Calculator!\n"
       << "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!\n"
       << "The number of assignments must be between 0 and 10\n"
       << "All scores entered must be between 0 and 4\n"
       << endl;
}