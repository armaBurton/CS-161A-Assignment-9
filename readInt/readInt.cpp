#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int readInt(string prompt){
  
  int number = -1;
  bool checkNumber {};
  do{

      cout << endl 
           << prompt << endl;
      cin >> number;
      while (1){
        if (cin.fail()){
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          cout << "Please enter a number between 0 - 10.\n";
          cin >> number;
          cout << number << endl;
        } else if (!cin.fail()){
          break;
        }
      }

      if (number < 0){
        cout << "The number of assignment you have entered is too small.\n";
      } else if (number > 10){
        cout << "The number of assignments you have entered is too large.\n";
      } 

  } while (number < 0 || number > 10);

  

  return number;
}