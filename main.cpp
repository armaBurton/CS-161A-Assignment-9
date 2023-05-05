#include <iostream>
#include <string>
#include "welcomeText/welcomeText.cpp"
#include "readInt/readInt.cpp"

using namespace std;


int main () {
  int numberOfAssignments {};

  welcomeText();
    numberOfAssignments = readInt("Enter the number of assignments (0 to 10): ");



  return 0;
}

