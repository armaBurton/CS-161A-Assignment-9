#include <iostream>
#include <cmath>

using namespace std;

int readInt(string prompt){
  
  int number {};
  do{

    cout << endl 
         << prompt << endl;
    cin >> number;

    if (number < 0){
      cout << "The number of assignment you have entered is too small.\n";
    } else if (number > 10){
      cout << "The number of assignments you have entered is too large.\n";
    } 

  } while ((10 < number < 0));

  

  return number;
}