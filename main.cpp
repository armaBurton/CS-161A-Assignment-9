#include <iostream>
#include <string>
#include "welcomeText/welcomeText.cpp"
#include "readInt/readInt.cpp"

using namespace std;


int main () {
  int consoleInt {};

  welcomeText();
    consoleInt = readInt("Enter the number of assignments (0 to 10): ");
    cout << endl
         << consoleInt << endl;


  return 0;
}

