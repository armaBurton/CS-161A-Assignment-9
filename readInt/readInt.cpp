#include <iostream>
#include <cmath>
#include <limits>
#include <string>

using namespace std;

int readInt(string prompt){
  int number {};
  cout << prompt;
  cin >> number;
  while (1){
    if (cin.fail()){
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Please enter a numerical value. ";
      cout << prompt;
      cin >> number;
    } else if (!cin.fail()){
      break;
    }
  }

  return number;
}
