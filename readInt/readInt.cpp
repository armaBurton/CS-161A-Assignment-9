#include <iostream>
#include <cmath>

using namespace std;

int readInt(string prompt){
  
  int number {};
  // bool checkNumber {};
  do{

      cout << endl 
           << prompt << endl;
      cin >> number;
  
      if (number < 0){
        cout << "The number of assignment you have entered is too small.\n";
      } else if (number > 10){
        cout << "The number of assignments you have entered is too large.\n";
      } else if (!isnan(number)){
        cout << "Please enter a number between 0 and 10\n";
        number = readInt(prompt);
      }
        cout << !isnan(number) << true << endl;
  } while (number < 0 || number > 10 && isnan(number) == true);

  

  return number;
}