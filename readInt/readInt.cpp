#include <iostream>
#include <cmath>
#include <limits>
#include <string>

using namespace std;

int readInt(string prompt, int max){
  
  int number = -1;
  bool checkNumber {};
  string str = prompt;
  str += to_string(max);
  str += "): ";
  do{
      cout << str;
      cin >> number;
      while (1){
        if (cin.fail()){
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(),'\n');
          cout << str;
          cin >> number;
        } else if (!cin.fail()){
          break;
        }
      }
      if (number < 0 || number > max){
        cout << "You have entered an invalid value.";
      }

  } while (number < 0 || number > max);

  

  return number;
}